```c
// Саставити функцију која врши сабирање два цела броја,
// а затим саставити програм који тестира функцију и исписује резултат.

// Тежи начин

#include <stdio.h>

/*Функција за сабирање два цела броја*/
int zbir(int a, int b)
{
    int rezultat;
    rezultat = a + b;
    return rezultat;
}

/*Главна функција*/
int main()
{
    int x, y, z;

    printf(" x = ");
    scanf("%d", &x);
    printf(" y = ");
    scanf("%d", &y);

    z = zbir(x, y);

    printf("\n z = %d\n", z);

    getchar();
    return 0;
}
```