```c
#include <stdio.h>

// Функција за рачунање обичног факторијела
unsigned long long fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

// Функција за рачунање двоструког факторијела
unsigned long long dfakt(int n)
{
    if (n <= 1)
        return 1;
    return n * dfakt(n - 2);
}

// Функција за рачунање суме серије
double calculateSum(int n)
{
    double sum = 0.0;
    int i;

    for (i = 1; i <= n; i++)
    {
        sum += (double)dfakt(i) / fact(i + 1);
    }

    return sum;
}

int main()
{
    int n;

    printf("Unesite vrednost za n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Molimo unesite pozitivan broj.\n");
        return 1;
    }

    double result = calculateSum(n);
    printf("Suma serije za n = %d je: %lf\n", n, result);

    return 0;
}
```