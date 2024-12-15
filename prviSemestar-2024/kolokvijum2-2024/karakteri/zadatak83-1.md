```c
// Задатак 83:
// Саставити програм за одређивање броја великих слова, малих слова и цифара у улазном тексту.
// Унос текста се завршава сигналом ЕОF.

// Први начин (тежи):

#include <stdio.h>

int main()
{
    int c, veliko = 0, malo = 0, cifra = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
            veliko++;
        if (c >= 'a' && c <= 'z')
            malo++;
        if (c >= '0' && c <= '9')
            cifra++;
    }
    printf("\n Velika: %d", veliko);
    printf("\n Mala: %d", malo);
    printf("\n Cifre: %d", cifra);

    getchar();
    return 0;
}
```