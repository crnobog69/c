// Задатак 86:
// Саставити програм који врши конверзију унетих великих слова у мала.
// Унос текста се завршава сигналом ЕОF.

// Други начин (лакши):

#include <stdio.h>
#include <ctype.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(tolower(c));
    }

    getchar();
    return 0;
}