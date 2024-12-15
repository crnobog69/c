```c
// Задатак 83:
// Саставити програм за одређивање броја великих слова, малих слова и цифара у улазном тексту.
// Унос текста се завршава сигналом ЕОF.

// Други начин (лакши):

#include <stdio.h>
#include <ctype.h>

int main()
{
    int c, veliko = 0, malo = 0, cifra = 0;
    while ((c = getchar()) != EOF)
    {
        veliko += isupper(c) != 0;
        malo += islower(c) != 0;
        cifra += isdigit(c) != 0;
    }
    printf("\n Velika: %d", veliko);
    printf("\n Mala: %d", malo);
    printf("\n Cifra: %d", cifra);

    getchar();
    return 0;
}
```
