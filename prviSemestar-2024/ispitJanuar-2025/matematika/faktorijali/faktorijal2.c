#include <stdio.h>

double fakt(int broj)
{
    if (broj <= 1)
    {
        return 1;
    }
    return broj * fakt(broj - 1);
}

// Функција за рачунање двоструког факторијела
double dfakt(int broj)
{
    if (broj <= 1)
    {
        return 1;
    }
    return broj * dfakt(broj - 2);
}

// Функција за рачунање суме серије
double racunanjeSume(int broj)
{
    double suma = 0.0;
    int i;
    int znak = 1; // Почињемо са + (1), па мењамо у - (-1)

    for (i = 1; i <= broj; i++)
    {
        suma += znak * ((double)dfakt(i) / fakt(i + 1)); // Делимо са (i+1)
        znak = -znak;                                    // Мењамо знак за следећи члан
    }

    suma = (double)(1 / fakt(2)) + suma; // Додамо 1 / fakt(2) први члан серије

    return suma;
}

int main()
{
    int broj;

    printf("Unesite vrednost za n: ");
    scanf("%d", &broj);

    if (broj < 1)
    {
        printf("Molimo unesite pozitivan broj.\n");
        return 1;
    }

    double rezultat = racunanjeSume(broj);
    printf("Suma za n = %d je: %lf\n", broj, rezultat);

    return 0;
}