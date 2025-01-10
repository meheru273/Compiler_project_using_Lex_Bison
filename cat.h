#ifndef CAT_H
#define CAT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Symbol table and variable sizes */
#define SYMSIZE 100
#define IDLEN 31

/* Modes for symbol table access */
#define SET 0
#define GET 1

/* For for-loop condition */
#define FOR_CONDITION(start, end, step) ((step < 0) ? (start > end) : (start < end))

/* Node type definitions */
typedef enum { 
    typeCon,    /* constant */
    typeId,     /* identifier */
    typeOpr     /* operator */
} nodeEnum;

/* Constant type definition */
typedef enum {
    typeNum,    /* number constant */
    typeStr     /* string constant */
} conEnum;

/* Constant node type */
typedef struct {
    conEnum type;       /* constant type */
    union {
        double dValue;  /* numeric value */
        char *sValue;   /* string value */
    };
} conNodeType;

/* Identifier node type */
typedef struct {
    int i;      /* Symbol table index */
} idNodeType;

/* Operator node type */
typedef struct {
    int oper;                   /* operator */
    int nops;                   /* number of operands */
    struct nodeTypeTag **op;    /* operands */
} oprNodeType;

/* Node type */
typedef struct nodeTypeTag {
    nodeEnum type;             /* type of node */
    union {
        conNodeType con;       /* constants */
        idNodeType id;         /* identifiers */
        oprNodeType opr;       /* operators */
    };
} nodeType;

/* Function declarations */
int yylex(void);
int getIndex(char *id, char mode);
nodeType *id(char *vName, char mode);
nodeType *cond(double dValue);
nodeType *cons(char *sValue);
nodeType *opr(int oper, int nops, ...);
void freeNode(nodeType *p);
double ex(nodeType *p);

/* External variables */
extern double sym[SYMSIZE];            /* Symbol table */
extern char vars[SYMSIZE][IDLEN];      /* Variable table */
extern unsigned int seed;              /* For random number generation */
extern FILE *yyin;
extern int yylineno;

#endif /* CAT_H */ 