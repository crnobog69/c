#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interpreter.h"

int char_to_int(char c)
{
    return (int)c;
}

char int_to_char(int i)
{
    return (char)i;
}

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    return c;
}

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}

Interpreter *new_interpreter()
{
    Interpreter *interpreter = (Interpreter *)malloc(sizeof(Interpreter));
    interpreter->variable_count = 0;
    return interpreter;
}

void set_variable(Interpreter *interpreter, char *name, int value)
{
    for (int i = 0; i < interpreter->variable_count; i++)
    {
        if (strcmp(interpreter->variables[i].name, name) == 0)
        {
            interpreter->variables[i].value = value;
            return;
        }
    }

    if (interpreter->variable_count < MAX_VARIABLES)
    {
        interpreter->variables[interpreter->variable_count].name = strdup(name);
        interpreter->variables[interpreter->variable_count].value = value;
        interpreter->variables[interpreter->variable_count].type = VAR_INT;
        interpreter->variable_count++;
    }
}

int get_variable(Interpreter *interpreter, char *name)
{
    for (int i = 0; i < interpreter->variable_count; i++)
    {
        if (strcmp(interpreter->variables[i].name, name) == 0)
        {
            return interpreter->variables[i].value;
        }
    }
    return 0;
}

int evaluate_expression(Interpreter *interpreter, Lexer *lexer)
{
    Token *token = next_token(lexer);
    int left;

    if (token->type == TOKEN_NUMBER)
    {
        left = atoi(token->value);
    }
    else if (token->type == TOKEN_IDENTIFIER)
    {
        left = get_variable(interpreter, token->value);
    }

    // Check for operators
    token = next_token(lexer);
    if (token->type == TOKEN_PLUS)
    {
        token = next_token(lexer);
        if (token->type == TOKEN_NUMBER)
        {
            return left + atoi(token->value);
        }
        else if (token->type == TOKEN_IDENTIFIER)
        {
            return left + get_variable(interpreter, token->value);
        }
    }
    else if (token->type == TOKEN_MINUS)
    {
        token = next_token(lexer);
        if (token->type == TOKEN_NUMBER)
        {
            return left - atoi(token->value);
        }
        else if (token->type == TOKEN_IDENTIFIER)
        {
            return left - get_variable(interpreter, token->value);
        }
    }

    return left;
}

void define_function(Interpreter *interpreter, char *name, char *body, int start, int end)
{
    if (interpreter->function_count < MAX_FUNCTIONS)
    {
        interpreter->functions[interpreter->function_count].name = strdup(name);
        interpreter->functions[interpreter->function_count].body = strdup(body);
        interpreter->functions[interpreter->function_count].start_pos = start;
        interpreter->functions[interpreter->function_count].end_pos = end;
        interpreter->function_count++;
    }
}

void execute_function(Interpreter *interpreter, char *name)
{
    for (int i = 0; i < interpreter->function_count; i++)
    {
        if (strcmp(interpreter->functions[i].name, name) == 0)
        {
            interpret(interpreter, interpreter->functions[i].body);
            return;
        }
    }
    printf("Error: Function '%s' not found\n", name);
}

void interpret(Interpreter *interpreter, char *input)
{
    Lexer *lexer = new_lexer(input);
    Token *token;

    while ((token = next_token(lexer))->type != TOKEN_EOF)
    {
        if (token->type == TOKEN_BLOODMERIDIAN)
        {
            printf("He never sleeps. He says that he will never die. He dances in light and in shadow and he is a great favorite. He never sleeps, the judge. He is dancing, dancing. He says that he will never die.\n");
            printf("― Cormac McCarthy, Blood Meridian, or, the Evening Redness in the West\n\n");
        }
        else if (token->type == TOKEN_KRVAVIMERIDIJAN)
        {
            printf("Он никад не спава. Каже да никада неће умрети. Он плеше у светлу и у сенци и велики је фаворит. Он никад не спава, судија. Он плеше, плеше. Каже да никада неће умрети.\n");
            printf("― Кормак Мекарти, Крвави Меридијан, или, Вечерње црвенило на Западу\n\n");
        }
        else if (token->type == TOKEN_DEF)
        {
            // Function definition
            token = next_token(lexer);
            if (token->type == TOKEN_IDENTIFIER)
            {
                char *func_name = strdup(token->value);

                // Skip until we find the opening brace
                while ((token = next_token(lexer))->type != TOKEN_LBRACE)
                {
                    if (token->type == TOKEN_EOF)
                    {
                        printf("Error: Expected { in function definition\n");
                        return;
                    }
                }

                // Collect function body
                int brace_count = 1;
                int start_pos = lexer->position;
                while (brace_count > 0 && token->type != TOKEN_EOF)
                {
                    token = next_token(lexer);
                    if (token->type == TOKEN_LBRACE)
                        brace_count++;
                    if (token->type == TOKEN_RBRACE)
                        brace_count--;
                }
                int end_pos = lexer->position;

                // Extract function body
                int body_length = end_pos - start_pos - 1;
                char *body = (char *)malloc(body_length + 1);
                strncpy(body, input + start_pos, body_length);
                body[body_length] = '\0';

                define_function(interpreter, func_name, body, start_pos, end_pos);
                free(body);
            }
        }
        else if (token->type == TOKEN_INT)
        {
            do
            {
                token = next_token(lexer);
                if (token->type == TOKEN_IDENTIFIER)
                {
                    Variable *var = &interpreter->variables[interpreter->variable_count];
                    var->name = strdup(token->value);
                    var->value = 0;
                    var->type = VAR_INT;
                    interpreter->variable_count++;
                }
                token = next_token(lexer);
            } while (token->type == TOKEN_COMMA);
        }
        else if (token->type == TOKEN_CHAR)
        {
            do
            {
                token = next_token(lexer);
                if (token->type == TOKEN_IDENTIFIER)
                {
                    Variable *var = &interpreter->variables[interpreter->variable_count];
                    var->name = strdup(token->value);
                    var->value = 0;
                    var->type = VAR_CHAR;
                    interpreter->variable_count++;
                }
                token = next_token(lexer);
            } while (token->type == TOKEN_COMMA);
        }
        else if (token->type == TOKEN_PRINT)
        {
            token = next_token(lexer);
            if (token->type == TOKEN_IDENTIFIER)
            {
                int value = get_variable(interpreter, token->value);
                // Check if there's an operator after the identifier
                Token *next = next_token(lexer);
                if (next->type == TOKEN_PLUS || next->type == TOKEN_MINUS ||
                    next->type == TOKEN_MULTIPLY || next->type == TOKEN_DIVIDE)
                {
                    lexer->position -= strlen(token->value) + 1; // Rewind to start of expression
                    value = evaluate_expression(interpreter, lexer);
                }
                printf("%d\n", value);
            }
            else if (token->type == TOKEN_ASSIGN)
            {
                token = next_token(lexer);
                if (token->type == TOKEN_STRING)
                {
                    printf("%s\n", token->value);
                }
            }
        }
        else if (token->type == TOKEN_SCAN)
        {
            token = next_token(lexer);
            if (token->type == TOKEN_STRING)
            {
                printf("%s", token->value); // Print prompt without newline
                fflush(stdout);             // Ensure prompt is displayed immediately

                char input_line[1024];
                if (fgets(input_line, sizeof(input_line), stdin))
                {
                    char *value = strtok(input_line, " \n");

                    do
                    {
                        token = next_token(lexer);
                        if (token->type == TOKEN_IDENTIFIER && value != NULL)
                        {
                            Variable *var = get_variable_info(interpreter, token->value);
                            if (var != NULL)
                            {
                                if (var->type == VAR_INT)
                                {
                                    set_variable(interpreter, token->value, atoi(value));
                                }
                                else if (var->type == VAR_CHAR)
                                {
                                    set_variable(interpreter, token->value, value[0]);
                                }
                            }
                            value = strtok(NULL, " \n"); // Get next value
                        }
                        token = next_token(lexer);
                    } while (token->type == TOKEN_COMMA && value != NULL);
                }
            }
        }
        else if (token->type == TOKEN_WHILE)
        {
            token = next_token(lexer);
            if (token->type == TOKEN_LPAREN)
            {
                int condition_start = lexer->position;
                int brace_count = 1;

                // Find the end of condition
                while (brace_count > 0)
                {
                    token = next_token(lexer);
                    if (token->type == TOKEN_LPAREN)
                        brace_count++;
                    if (token->type == TOKEN_RPAREN)
                        brace_count--;
                }

                // Get the loop body
                token = next_token(lexer);
                if (token->type == TOKEN_LBRACE)
                {
                    int body_start = lexer->position;
                    brace_count = 1;

                    while (brace_count > 0)
                    {
                        token = next_token(lexer);
                        if (token->type == TOKEN_LBRACE)
                            brace_count++;
                        if (token->type == TOKEN_RBRACE)
                            brace_count--;
                    }

                    int body_end = lexer->position - 1;

                    // Extract condition and body
                    char *condition = extract_text(input, condition_start,
                                                   body_start - condition_start - 2);
                    char *body = extract_text(input, body_start, body_end - body_start);

                    // Execute the loop
                    while (evaluate_condition(interpreter, condition))
                    {
                        interpret(interpreter, body);
                    }

                    free(condition);
                    free(body);
                }
            }
        }
    }
}

int evaluate_ternary(Interpreter *interpreter, Lexer *lexer)
{
    int condition = evaluate_expression(interpreter, lexer);

    Token *token = next_token(lexer);
    if (token->type != TOKEN_QUESTION)
        return condition;

    int true_value = evaluate_expression(interpreter, lexer);

    token = next_token(lexer);
    if (token->type != TOKEN_COLON)
        return true_value;

    int false_value = evaluate_expression(interpreter, lexer);

    return condition ? true_value : false_value;
}

void print_error(const char *message)
{
    printf("\n❌ Greška: %s\n", message);
    printf("💡 Savet: ");

    if (strstr(message, "semicolon"))
    {
        printf("Nedostaje tačka-zarez (;) na kraju reda.\n");
    }
    else if (strstr(message, "undefined"))
    {
        printf("Promenljiva nije definisana. Prvo je morate deklarisati sa 'broj' ili 'tekst'.\n");
    }
    else if (strstr(message, "function"))
    {
        printf("Funkcija nije pronađena. Proverite da li ste je definisali sa 'def'.\n");
    }
}

Variable *get_variable_info(Interpreter *interpreter, char *name)
{
    for (int i = 0; i < interpreter->variable_count; i++)
    {
        if (strcmp(interpreter->variables[i].name, name) == 0)
        {
            return &interpreter->variables[i];
        }
    }
    return NULL;
}

char *extract_text(char *input, int start, int length)
{
    char *text = (char *)malloc(length + 1);
    strncpy(text, input + start, length);
    text[length] = '\0';
    return text;
}

bool evaluate_condition(Interpreter *interpreter, char *condition)
{
    Lexer *condition_lexer = new_lexer(condition);
    int result = evaluate_expression(interpreter, condition_lexer);
    free(condition_lexer);
    return result != 0;
}