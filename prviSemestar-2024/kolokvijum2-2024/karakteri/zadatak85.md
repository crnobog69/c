```c
// Задатак 85:
// Саставити програм који броји карактере улазног текста различите од децималних цифара.
// Унос текста се завршава сигналом EOF.

#include <stdio.h>
#include <ctype.h>

int main()
{
    int c, n = 0;
    while ((c = getchar()) != EOF)
    {
        if (isdigit(c))
            continue;
        n++;
    }
    printf("Broj znakova koju nisu cifre: %d\n", n);

    getchar();
    return 0;
}
```
