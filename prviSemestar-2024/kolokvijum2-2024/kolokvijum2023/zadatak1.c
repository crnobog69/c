// 1. Zadatak: Računanje sume S=11!+12!+⋯+1n!S=1!1​+2!1​+⋯+n!1​

#include <stdio.h>

double faktorijel(int broj)
{
    double rezultat = 1;

    for (int i = 1; i <= broj; i++)
    {
        rezultat *= i;
    }
    return rezultat;
}

int main()
{
    int n;
    double suma = 0;

    printf("Unesite broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        suma += 1.0 / faktorijel(i);
    }

    printf("Suma je: %.6lf\n", suma);
    return 0;
}
