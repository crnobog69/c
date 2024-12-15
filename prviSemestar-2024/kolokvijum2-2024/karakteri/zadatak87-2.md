```c
// Задатак 87:
// Саставити програм који врши конверзију унетих малих слова у велика.
// Унос текста се завршава сигналом ЕОF.

// Други начин (лакши):

#include <stdio.h>
#include <ctype.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(toupper(c));
    }

    getchar();
    return 0;
}
```