```c
// aritmeticka sredina

#include <stdio.h>

int main()
{
    int n, i;
    float ars, a, suma;
    // suma stavljena na 0
    suma = 0;

    printf("n= \n");
    scanf("%d", &n);

    printf("Unesite %d brojeva: \n", n);

    for (i = 1; i <= n; i++)
    {
        scanf("%f", &a);
        suma += a;
    }

    ars = suma / n;

    printf("Аритметичја средина је: %.2f\n", ars);
    printf("Suma je: %.2f\n", suma);

    return 0;
}
```