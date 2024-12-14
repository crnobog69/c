// Саставити програм који за дато n рачуна и исписује суму S=1!+2!+3!+...+n!.
// За рачунање факторијела користити одговарајућу функцију.

#include <stdio.h>

long Fakt(int n)
{
    long i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;

    return f;
}

int main()
{
    long n, s = 0;
    int i;

    printf(" n = ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
        s += Fakt(i);

    printf("\n S = %ld\n", s);

    getchar();
    return 0;
}