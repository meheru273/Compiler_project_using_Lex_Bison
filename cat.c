#include "cat.h"
extern char *yytext;
extern int line_num;


SymbolEntry symbolTable[MAX_SYMBOLS];
int sym_count = 0;  // Initialize sym_count
int symbolCount = 0;
int currentScope = 0;


void initSymbolTable() {
    symbolCount = 0;
    currentScope = 0;
    printf("Initializing symbol table...\n");
    // Add built-in functions
    addSymbol("sin", SYM_FUNCTION, TYPE_FLOAT, 0);
    addSymbol("cos", SYM_FUNCTION, TYPE_FLOAT, 0);
    addSymbol("tan", SYM_FUNCTION, TYPE_FLOAT, 0);
    addSymbol("log", SYM_FUNCTION, TYPE_FLOAT, 0);
    addSymbol("exp", SYM_FUNCTION, TYPE_FLOAT, 0);
    addSymbol("pow", SYM_FUNCTION, TYPE_FLOAT, 0);
    addSymbol("sqrt", SYM_FUNCTION, TYPE_FLOAT, 0);
}

int addSymbol(const char *name, SymbolType symType, DataType dataType, int scope) {
    if (symbolCount >= MAX_SYMBOLS) {
        yyerror("Symbol table full");
        return -1;
    }

    // Check for duplicate symbol in the current scope
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].scope == scope) {
            return i;  // Symbol already exists
        }
    }

    // Add new symbol
    SymbolEntry *symbol = &symbolTable[symbolCount];
    strncpy(symbol->name, name, MAX_ID_LENGTH - 1);
    symbol->name[MAX_ID_LENGTH - 1] = '\0';  // Ensure null-termination
    symbol->symType = symType;
    symbol->dataType = dataType;
    symbol->scope = scope;
    symbol->initialized = 0;
    symbol->value.intValue = 0;  // Default to zero
    symbol->value.floatValue = 0.0;
    printf("Added symbol: %s, Type: %d, DataType: %d, Scope: %d\n", name, symType, dataType, scope);
    return symbolCount++;
}


int lookupSymbol(const char *name, int scope) {
    for (int s = scope; s >= 0; s--) {
        for (int i = 0; i < symbolCount; i++) {
            if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].scope == s) {
                return i;
            }
        }
    }
    return -1;  // Symbol not found
}


ASTNode *createNode(NodeType type) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    if (!node) {
        yyerror("Out of memory");
        exit(1);
    }
    
    memset(node, 0, sizeof(ASTNode));
    node->type = type;
    node->next = NULL;
    
    if (type == NODE_VARDECL) {
        node->data.identifier.hasInitializer = 0;
        node->data.identifier.initializer = NULL;
    }
    
    return node;
}
ASTNode *createNodeWithBlock(NodeType type, ASTNode *callNode, ASTNode *blockNode) {
    ASTNode *node = createNode(type);
    if (!node) return NULL;

    node->data.callBlock.call = callNode;
    node->data.callBlock.block = blockNode;
    return node;
}

ASTNode *createBinaryOp(int operator, ASTNode *left, ASTNode *right) {
    ASTNode *node = createNode(NODE_BINARY_OP);
    node->data.operation.operator = operator;
    node->data.operation.left = left;
    node->data.operation.right = right;
    return node;
}

ASTNode *createUnaryOp(int operator, ASTNode *operand) {
    ASTNode *node = createNode(NODE_UNARY_OP);
    node->data.operation.operator = operator;
    node->data.operation.left = operand;
    node->data.operation.right = NULL;
    return node;
}

ASTNode *createConstant(DataType type, ...) {
    va_list args;
    va_start(args, type);
    
    ASTNode *node = createNode(NODE_CONSTANT);
    node->data.constant.dataType = type;
    
    if (type == TYPE_INT) {
        node->data.constant.intValue = va_arg(args, int);
    } else {
        node->data.constant.floatValue = va_arg(args, double);
    }
    
    va_end(args);
    return node;
}

ASTNode *createIdentifier(const char *name) {
    ASTNode *node = createNode(NODE_IDENTIFIER);
    strncpy(node->data.identifier.name, name, MAX_ID_LENGTH - 1);
    node->data.identifier.name[MAX_ID_LENGTH - 1] = '\0';  // Ensure null-termination
    node->data.identifier.symbolIndex = lookupSymbol(name, currentScope);
    return node;
}


void freeAST(ASTNode *node) {
    if (!node) return;
    
    switch (node->type) {
        case NODE_BINARY_OP:
        case NODE_UNARY_OP:
            freeAST(node->data.operation.left);
            freeAST(node->data.operation.right);
            break;
            
        case NODE_CALL:
            for (int i = 0; i < node->data.call.argCount; i++) {
                freeAST(node->data.call.arguments[i]);
            }
            free(node->data.call.arguments);
            break;
            
        case NODE_IF:
        case NODE_SWITCH:
            freeAST(node->data.control.condition);
            freeAST(node->data.control.thenBranch);
            freeAST(node->data.control.elseBranch);
            break;
    }
    
    freeAST(node->next);
    free(node);
}

void printAST(ASTNode *node, FILE *outFile) {
    if (!node) return;

    switch (node->type) {
        case NODE_VARDECL:
            if (strlen(node->data.identifier.name) > 0) {
                fprintf(outFile, "Variable Declaration: %s\n", node->data.identifier.name);
            } else {
                fprintf(outFile, "Variable Declaration: <unnamed>\n");
            }
            break;

        case NODE_BINARY_OP:
            switch (node->data.operation.operator) {
                case TOKEN_GT:
                    fprintf(outFile, "Binary Operation: >\n");
                    fprintf(outFile, "Left operand:\n");
                    printAST(node->data.operation.left, outFile);
                    fprintf(outFile, "Right operand:\n");
                    printAST(node->data.operation.right, outFile);
                    break;
                case TOKEN_ASSIGN:
                    fprintf(outFile, "Assignment Operation\n");
                    fprintf(outFile, "Target: ");
                    if (node->data.operation.left && node->data.operation.left->type == NODE_IDENTIFIER) {
                        fprintf(outFile, "%s\n", node->data.operation.left->data.identifier.name);
                    }
                    fprintf(outFile, "Value: ");
                    if (node->data.operation.right && node->data.operation.right->type == NODE_CONSTANT) {
                        if (node->data.operation.right->data.constant.dataType == TYPE_INT) {
                            fprintf(outFile, "%d\n", node->data.operation.right->data.constant.intValue);
                        } else if (node->data.operation.right->data.constant.dataType == TYPE_FLOAT) {
                            fprintf(outFile, "%.2f\n", node->data.operation.right->data.constant.floatValue);
                        }
                    }
                    break;
                default:
                    fprintf(outFile, "Unknown binary operation\n");
            }
            break;

        case NODE_IF:
            fprintf(outFile, "If Statement:\n");
            if (node->data.control.condition) {
                fprintf(outFile, "Condition:\n");
                printAST(node->data.control.condition, outFile);
            }
            if (node->data.control.thenBranch) {
                fprintf(outFile, "Then Branch:\n");
                printAST(node->data.control.thenBranch, outFile);
            }
            if (node->data.control.elseBranch) {
                fprintf(outFile, "Else Branch:\n");
                printAST(node->data.control.elseBranch, outFile);
            }
            break;

        case NODE_CONSTANT:
            if (node->data.constant.dataType == TYPE_INT) {
                fprintf(outFile, "Constant: %d\n", node->data.constant.intValue);
            } else if (node->data.constant.dataType == TYPE_FLOAT) {
                fprintf(outFile, "Constant: %.2f\n", node->data.constant.floatValue);
            } else if (node->data.constant.dataType == TYPE_STRING) {
                fprintf(outFile, "String Constant: %s\n", node->data.constant.stringValue);
            }
            break;

        case NODE_IDENTIFIER:
            fprintf(outFile, "Identifier: %s\n", node->data.identifier.name);
            break;

        case NODE_EXERT:
            fprintf(outFile, "Exert Statement:\n");
            if (node->data.control.condition->type == NODE_IDENTIFIER) {
                int index = node->data.control.condition->data.identifier.symbolIndex;
                if (index >= 0) {
                    SymbolEntry *symbol = &symbolTable[index];
                    fprintf(outFile, "Identifier: %s, Value: ", symbol->name);
                    if (symbol->dataType == TYPE_INT)
                        fprintf(outFile, "%d\n", symbol->value.intValue);
                    else if (symbol->dataType == TYPE_FLOAT)
                        fprintf(outFile, "%.2f\n", symbol->value.floatValue);
                } else {
                    fprintf(outFile, "Identifier: %s (Uninitialized)\n",
                            node->data.control.condition->data.identifier.name);
                }
            } else if (node->data.control.condition->type == NODE_CONSTANT) {
                if (node->data.control.condition->data.constant.dataType == TYPE_STRING) {
                    fprintf(outFile, "String Constant: %s\n", 
                            node->data.control.condition->data.constant.stringValue);
                }
            }
            break;
            case NODE_SWITCH:
            fprintf(outFile, "Switch Statement:\n");
            fprintf(outFile, "Condition:\n");
            printAST(node->data.control.condition, outFile);
            fprintf(outFile, "Cases:\n");
            printAST(node->data.control.thenBranch, outFile);
            break;
            case NODE_CASE:
            fprintf(outFile, "Case:\n");
            if (node->data.control.condition) {
                fprintf(outFile, "Case Value:\n");
                printAST(node->data.control.condition, outFile);
            } else {
                fprintf(outFile, "Default Case\n");
            }
            fprintf(outFile, "Case Body:\n");
            printAST(node->data.control.thenBranch, outFile);
            if (node->data.control.elseBranch) {
                printAST(node->data.control.elseBranch, outFile);
            }
            break;
            case NODE_BREAK:
            fprintf(outFile, "Break Statement\n");
            break;
            
        case NODE_CALL:
            fprintf(outFile, "Function Call: %s\n", node->data.call.name);
            if (node->data.call.arguments) {
                fprintf(outFile, "Arguments:\n");
                for (int i = 0; i < node->data.call.argCount; i++) {
                    printAST(node->data.call.arguments[i], outFile);
                }
            }
            break;
            case NODE_FUNCTION:
            fprintf(outFile, "Function Declaration: %s\n", node->data.identifier.name);
            if (node->data.control.thenBranch) {
                fprintf(outFile, "Function Body:\n");
                printAST(node->data.control.thenBranch, outFile);
            }
            break;

        default:
            fprintf(outFile, "Unhandled node type: %d\n", node->type);
            break;
    }

    if (node->next) {
        printAST(node->next, outFile);
    }
}
float evaluateExpression(ASTNode *node) {
    if (!node) return 0.0;

    switch (node->type) {
        case NODE_CONSTANT:
            // Return the constant's value
            if (node->data.constant.dataType == TYPE_INT)
                return (float)node->data.constant.intValue;
            if (node->data.constant.dataType == TYPE_FLOAT)
                return node->data.constant.floatValue;
            return 0.0;

        case NODE_IDENTIFIER: {
            // Lookup the symbol table for the identifier's value
            int index = node->data.identifier.symbolIndex;
            if (index >= 0) {
                SymbolEntry *symbol = &symbolTable[index];
                if (symbol->dataType == TYPE_INT)
                    return (float)symbol->value.intValue;
                if (symbol->dataType == TYPE_FLOAT)
                    return symbol->value.floatValue;
            }
            fprintf(stderr, "Error: Uninitialized variable '%s'\n", node->data.identifier.name);
            return 0.0;
        }

        case NODE_BINARY_OP: {
            float left = evaluateExpression(node->data.operation.left);
            float right = evaluateExpression(node->data.operation.right);
            switch (node->data.operation.operator) {
                case TOKEN_PLUS: return left + right;
                case TOKEN_MINUS: return left - right;
                case TOKEN_MULT: return left * right;
                case TOKEN_DIV: return right != 0 ? left / right : 0;
                default: return 0.0;
            }
        }
        case NODE_ASSIGNMENT: {
            float rhs_value = evaluateExpression(node->data.operation.right);
            int target_index = node->data.operation.left->data.identifier.symbolIndex;
            if (target_index >= 0) {
            if (symbolTable[target_index].dataType == TYPE_INT) {
            symbolTable[target_index].value.intValue = (int)rhs_value;
            } else {
            symbolTable[target_index].value.floatValue = rhs_value;
            }
            symbolTable[target_index].initialized = 1;
            }
    
    return rhs_value;
        }

        default:
            fprintf(stderr, "Unhandled node type in evaluateExpression: %d\n", node->type);
            return 0.0;
    }
}



ASTNode *createConstantString(const char *value) {
    ASTNode *node = createNode(NODE_CONSTANT);
    node->data.constant.dataType = TYPE_STRING;
    node->data.constant.stringValue = strdup(value);
    return node;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, unexpected token: '%s'\n", s, line_num, yytext);
}
