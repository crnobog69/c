#include <stdio.h>

int main()
{
    int n, i;
    float a, s, ars;
    printf("Unesite n: ");
    scanf("%d", &n);
    printf("Unesite %d n brojeva brojeva: ", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &a);
        s += a;
    }
    ars = s / n;
    printf("Suma je: %f\n", s);
    printf("Aritmeticka sredina je: %f\n", ars);

    return 0;
}