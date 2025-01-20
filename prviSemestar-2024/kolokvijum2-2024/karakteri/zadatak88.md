```c
// Задатак 88:
// Саставити програм који врши конверзију првог слова у велико, а сва остала у мала унете реченице.
// Унос текста се завршава сигналом ЕОF.

#include <stdio.h>
#include <ctype.h>

int main()
{
    int c, prvi = 0;
    while ((c = getchar()) != EOF)
    {
        if (isalpha(c))
        {
            if (prvi == 0)
                putchar(toupper(c));
            else
                putchar(tolower(c));
        }
        else
            putchar(c);
        prvi = 1;
    }

    getchar();
    return 0;
}
```
