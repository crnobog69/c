#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <stdbool.h>
#include "lexer.h"

#define MAX_VARIABLES 100
#define MAX_FUNCTIONS 50

typedef enum
{
    VAR_INT,
    VAR_CHAR,
    VAR_BOOL
} VariableType;

typedef struct
{
    char *name;
    int value;
    VariableType type;
} Variable;

typedef struct
{
    char *name;
    char *body;
    int start_pos;
    int end_pos;
} Function;

typedef struct
{
    Variable variables[MAX_VARIABLES];
    int variable_count;
    Function functions[MAX_FUNCTIONS];
    int function_count;
} Interpreter;

Interpreter *new_interpreter();
void interpret(Interpreter *interpreter, char *input);
int evaluate_expression(Interpreter *interpreter, Lexer *lexer);
void set_variable(Interpreter *interpreter, char *name, int value);
int get_variable(Interpreter *interpreter, char *name);
Variable *get_variable_info(Interpreter *interpreter, char *name);
void define_function(Interpreter *interpreter, char *name, char *body, int start, int end);
void execute_function(Interpreter *interpreter, char *name);
char *extract_text(char *input, int start, int length);
bool evaluate_condition(Interpreter *interpreter, char *condition);

#endif