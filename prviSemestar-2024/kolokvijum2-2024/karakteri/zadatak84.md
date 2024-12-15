```c
// Задатак 84:
// Саставити програм за одређивање броја празних карактера, као и броја знакова: тачка, зарез, двотачка и тачка-зарез.
// Унос текста се завршава сигналом ЕОF.

#include <stdio.h>

int main()
{
    int c, razmak = 0, n = 0;
    while ((c = getchar()) != EOF)
        switch (c)
        {
        case ' ':
            razmak++;
            break;
        case '.':
        case ',':
        case ';':
        case ':':
            n++;
            break;
        default:
            break;
        }
    printf("\n Razmaci: %d", razmak);
    printf("\n Ostali znakovi: %d", n);

    getchar();
    return 0;
}
```