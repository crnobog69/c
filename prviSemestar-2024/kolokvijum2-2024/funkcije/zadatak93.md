```c
// Саставити програм који исписује суму цифара за унете границе интервала.
// За рачунање суме цифара формирати одговарајућу функцију.

#include <stdio.h>
#include <math.h>

int Suma(int a)
{
    int s = 0;

    while (a != 0)
    {
        s += a % 10;
        a /= 10;
    }

    return s;
}

char main()
{
    int i, d, g;

    printf(" Donja granica = ");
    scanf("%d", &d);
    printf(" Gornja granica = ");
    scanf("%d", &g);

    for (i = d; i <= g; i++)
        printf("\n%4d\t%3d ", i, Suma(fabs(i)));

    getchar();
    return 0;
}
```
