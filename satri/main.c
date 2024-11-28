#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interpreter.h"

char *read_file(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file '%s'\n", filename);
        exit(1);
    }

    // Get file size
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Allocate buffer and read file
    char *buffer = (char *)malloc(size + 1);
    fread(buffer, 1, size, file);
    buffer[size] = '\0';

    fclose(file);
    return buffer;
}

int main(int argc, char *argv[])
{
    printf("Satri Programming Language v1.0\n");
    printf("-------------------------------\n\n");

    if (argc != 2)
    {
        printf("Usage: satri <filename>.sat\n");
        return 1;
    }

    // Check file extension
    char *ext = strrchr(argv[1], '.');
    if (ext == NULL || strcmp(ext, ".st") != 0)
    {
        printf("Error: File must have .st extension\n");
        return 1;
    }

    char *source = read_file(argv[1]);
    Interpreter *interpreter = new_interpreter();
    interpret(interpreter, source);

    free(source);
    return 0;
}