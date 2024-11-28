#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "lexer.h"

void skip_single_line_comment(Lexer *lexer)
{
    // Skip until we reach a newline or EOF
    while (lexer->current_char != '\n' && lexer->current_char != '\0')
    {
        read_char(lexer);
    }
    if (lexer->current_char == '\n')
    {
        read_char(lexer);
    }
}

void skip_multiline_comment(Lexer *lexer)
{
    read_char(lexer); // skip the first *
    while (1)
    {
        if (lexer->current_char == '\0')
        {
            printf("Error: Unterminated multiline comment\n");
            return;
        }
        if (lexer->current_char == '*' && peek_char(lexer) == '/')
        {
            read_char(lexer); // skip *
            read_char(lexer); // skip /
            return;
        }
        read_char(lexer);
    }
}

Lexer *new_lexer(char *input)
{
    Lexer *lexer = (Lexer *)malloc(sizeof(Lexer));
    lexer->input = input;
    lexer->position = 0;
    lexer->read_position = 0;
    lexer->current_char = '\0';
    read_char(lexer);
    return lexer;
}

void read_char(Lexer *lexer)
{
    if (lexer->read_position >= strlen(lexer->input))
    {
        lexer->current_char = '\0';
    }
    else
    {
        lexer->current_char = lexer->input[lexer->read_position];
    }
    lexer->position = lexer->read_position;
    lexer->read_position++;
}

void skip_whitespace(Lexer *lexer)
{
    while (lexer->current_char == ' ' ||
           lexer->current_char == '\t' ||
           lexer->current_char == '\n' ||
           lexer->current_char == '\r' ||
           lexer->current_char == '\v' ||
           lexer->current_char == '\f')
    {
        read_char(lexer);
    }
}

char *read_identifier(Lexer *lexer)
{
    int start_pos = lexer->position;
    while (isalpha(lexer->current_char) || lexer->current_char == '_')
    {
        read_char(lexer);
    }
    int length = lexer->position - start_pos;
    char *identifier = (char *)malloc(length + 1);
    strncpy(identifier, &lexer->input[start_pos], length);
    identifier[length] = '\0';
    return identifier;
}

char *read_number(Lexer *lexer)
{
    int start_pos = lexer->position;
    while (isdigit(lexer->current_char))
    {
        read_char(lexer);
    }
    int length = lexer->position - start_pos;
    char *number = (char *)malloc(length + 1);
    strncpy(number, &lexer->input[start_pos], length);
    number[length] = '\0';
    return number;
}

Token *next_token(Lexer *lexer)
{
    skip_whitespace(lexer);

    Token *token;

    switch (lexer->current_char)
    {
    case '=':
        if (peek_char(lexer) == '=')
        {
            read_char(lexer);
            token = new_token(TOKEN_EQUALS, "==");
        }
        else
        {
            token = new_token(TOKEN_ASSIGN, "=");
        }
        break;
    case '+':
        token = new_token(TOKEN_PLUS, "+");
        break;
    case '-':
        token = new_token(TOKEN_MINUS, "-");
        break;
    case '*':
        token = new_token(TOKEN_MULTIPLY, "*");
        break;
    case '/':
        if (peek_char(lexer) == '/')
        {
            skip_single_line_comment(lexer);
            return next_token(lexer);
        }
        else if (peek_char(lexer) == '*')
        {
            skip_multiline_comment(lexer);
            return next_token(lexer);
        }
        token = new_token(TOKEN_DIVIDE, "/");
        break;
    case ';':
        token = new_token(TOKEN_SEMICOLON, ";");
        break;
    case '(':
        token = new_token(TOKEN_LPAREN, "(");
        break;
    case ')':
        token = new_token(TOKEN_RPAREN, ")");
        break;
    case '{':
        token = new_token(TOKEN_LBRACE, "{");
        break;
    case '}':
        token = new_token(TOKEN_RBRACE, "}");
        break;
    case '\0':
        token = new_token(TOKEN_EOF, "");
        break;
    case ',':
        token = new_token(TOKEN_COMMA, ",");
        break;
    case '?':
        token = new_token(TOKEN_QUESTION, "?");
        break;
    case ':':
        token = new_token(TOKEN_COLON, ":");
        break;
    case '&':
        if (peek_char(lexer) == '&')
        {
            read_char(lexer);
            token = new_token(TOKEN_AND, "&&");
        }
        break;
    case '|':
        if (peek_char(lexer) == '|')
        {
            read_char(lexer);
            token = new_token(TOKEN_OR, "||");
        }
        break;
    case '!':
        token = new_token(TOKEN_NOT, "!");
        break;
    default:
        if (isalpha(lexer->current_char))
        {
            char *identifier = read_identifier(lexer);
            if (strcmp(identifier, "print") == 0)
            {
                return new_token(TOKEN_PRINT, identifier);
            }
            else if (strcmp(identifier, "if") == 0)
            {
                return new_token(TOKEN_IF, identifier);
            }
            else if (strcmp(identifier, "else") == 0)
            {
                return new_token(TOKEN_ELSE, identifier);
            }
            else if (strcmp(identifier, "while") == 0)
            {
                return new_token(TOKEN_WHILE, identifier);
            }
            else if (strcmp(identifier, "def") == 0)
            {
                return new_token(TOKEN_DEF, identifier);
            }
            else if (strcmp(identifier, "int") == 0)
            {
                return new_token(TOKEN_INT, identifier);
            }
            else if (strcmp(identifier, "char") == 0)
            {
                return new_token(TOKEN_CHAR, identifier);
            }
            else if (strcmp(identifier, "bool") == 0)
            {
                return new_token(TOKEN_BOOL, identifier);
            }
            else if (strcmp(identifier, "true") == 0)
            {
                return new_token(TOKEN_TRUE, identifier);
            }
            else if (strcmp(identifier, "false") == 0)
            {
                return new_token(TOKEN_FALSE, identifier);
            }
            else if (strcmp(identifier, "to_int") == 0)
            {
                return new_token(TOKEN_CHAR_TO_INT, identifier);
            }
            else if (strcmp(identifier, "to_char") == 0)
            {
                return new_token(TOKEN_INT_TO_CHAR, identifier);
            }
            else if (strcmp(identifier, "upper") == 0)
            {
                return new_token(TOKEN_UPPER, identifier);
            }
            else if (strcmp(identifier, "lower") == 0)
            {
                return new_token(TOKEN_LOWER, identifier);
            }
            else if (strcmp(identifier, "is_digit") == 0)
            {
                return new_token(TOKEN_IS_DIGIT, identifier);
            }
            else if (strcmp(identifier, "is_alpha") == 0)
            {
                return new_token(TOKEN_IS_ALPHA, identifier);
            }
            else if (strcmp(identifier, "bloodmeridian") == 0)
            {
                return new_token(TOKEN_BLOODMERIDIAN, identifier);
            }
            else if (strcmp(identifier, "krvavimeridijan") == 0)
            {
                return new_token(TOKEN_KRVAVIMERIDIJAN, identifier);
            }
            return new_token(TOKEN_IDENTIFIER, identifier);
        }
        else if (isdigit(lexer->current_char))
        {
            return new_token(TOKEN_NUMBER, read_number(lexer));
        }
        else if (lexer->current_char == '"')
        {
            return new_token(TOKEN_STRING, read_string(lexer));
        }
        else
        {
            token = new_token(TOKEN_EOF, "");
        }
    }

    read_char(lexer);
    return token;
}

char peek_char(Lexer *lexer)
{
    if (lexer->read_position >= strlen(lexer->input))
    {
        return '\0';
    }
    return lexer->input[lexer->read_position];
}

Token *new_token(TokenType type, char *value)
{
    Token *token = (Token *)malloc(sizeof(Token));
    token->type = type;
    token->value = value;
    return token;
}

char *read_string(Lexer *lexer)
{
    read_char(lexer); // skip opening quote
    int start_pos = lexer->position;
    while (lexer->current_char != '"' && lexer->current_char != '\0')
    {
        read_char(lexer);
    }
    int length = lexer->position - start_pos;
    char *str = (char *)malloc(length + 1);
    strncpy(str, &lexer->input[start_pos], length);
    str[length] = '\0';
    read_char(lexer); // skip closing quote
    return str;
}