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
    
    // Check for existing symbol in current scope
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].scope == scope) {
            return i;  // Symbol already exists in current scope
        }
    }
    
    // Add new symbol
    SymbolEntry *symbol = &symbolTable[symbolCount];
    strncpy(symbol->name, name, MAX_ID_LENGTH - 1);
    symbol->symType = symType;
    symbol->dataType = dataType;
    symbol->scope = scope;
    symbol->initialized = 0;
    printf("Added symbol: %s, Type: %d, DataType: %d, Scope: %d\n", name, symType, dataType, scope);
    return symbolCount++;
}

int lookupSymbol(const char *name, int scope) {
    // Search in current and outer scopes
    printf("Looking up symbol: %s in scope %d...\n", name, scope);
    for (int s = scope; s >= 0; s--) {
        for (int i = 0; i < symbolCount; i++) {
            if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].scope == s) {
                printf("Found symbol '%s' at index %d in scope %d.\n", name, i, s);
                return i;
            }
        }
    }
    return -1;
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
        case NODE_EXERT:
            fprintf(outFile, "EXERT> ");
            printAST(node->data.control.condition, outFile);
            fprintf(outFile, "\n");
            break;
        case NODE_IDENTIFIER:
            fprintf(outFile, "Identifier: %s\n", node->data.identifier.name);
            break;
        case NODE_CONSTANT:
            if (node->data.constant.dataType == TYPE_INT)
                fprintf(outFile, "Constant: %d\n", node->data.constant.intValue);
            else
                fprintf(outFile, "Constant: %f\n", node->data.constant.floatValue);
            break;
        // Add other cases...
    }

    if (node->next) {
        printAST(node->next, outFile);
    }
}

ASTNode *createNodeWithBlock(NodeType type, ASTNode *callNode, ASTNode *blockNode) {
    // Create a new AST node
    ASTNode *node = createNode(type);

    // Ensure the type is appropriate for a function call with a block
    if (type != NODE_CALL_BLOCK) {
        yyerror("Invalid node type for createNodeWithBlock");
        return NULL;
    }

    // Link the function call node and block node
    node->data.callBlock.call = callNode;
    node->data.callBlock.block = blockNode;

    return node;
}



void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, unexpected token: '%s'\n", s, line_num, yytext);
}
