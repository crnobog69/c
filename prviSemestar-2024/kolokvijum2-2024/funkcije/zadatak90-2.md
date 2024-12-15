```c
// Саставити функцију која врши сабирање два цела броја,
// а затим саставити програм који тестира функцију и исписује резултат.

// Лакши начин

#include <stdio.h>

int zbir(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;

    printf(" x = ");
    scanf("%d", &x);
    printf(" y = ");
    scanf("%d", &y);

    // Позив функције `zbir`
    printf("\n z = %d\n", zbir(x, y));

    getchar();
    return 0;
}
```
