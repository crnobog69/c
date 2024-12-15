```c
// Задатак 89:
// Саставити програм који копира улазни текст на екран, где сваку реч приказује у једној линији.
// Унос текста се завршава сигналом ЕОF.

#include <stdio.h>
#define U_RECI 1
#define VAN_RECI 0

// #define JESTE_KARAKTER 1
// #define NIJE_KARAKTER 0

int main()
{
    int c, poz = VAN_RECI;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (poz == U_RECI)
            {
                putchar('\n');
                poz = VAN_RECI;
            }
        }
        else
        {
            poz = U_RECI;
            putchar(c);
        }
    }

    getchar();
    return 0;
}
```
