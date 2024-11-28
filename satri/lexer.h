#ifndef LEXER_H
#define LEXER_H

#include "token.h"

typedef struct {
    char* input;
    int position;
    int read_position;
    char current_char;
} Lexer;

Lexer* new_lexer(char* input);
Token* next_token(Lexer* lexer);
void read_char(Lexer* lexer);
char peek_char(Lexer* lexer);
Token* new_token(TokenType type, char* value);
char* read_identifier(Lexer* lexer);
char* read_number(Lexer* lexer);
char* read_string(Lexer* lexer);
void skip_whitespace(Lexer* lexer);

#endif 