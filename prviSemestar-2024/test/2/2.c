#include <stdio.h>

int main()
{
    int n;

    printf(" n = ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Unesite neparan broj.\n");
        return 1;
    }

    printf("* ");
    for (int i = 1; i < n - 2; i++)
    {
        printf("* ");
    }
    printf("* \n");

    for (int i = 1; i < n; i++)
    {
        printf("* ");
        for (int j = 1; j = n - 2; j++)
        {
            printf("  ");
        }
        printf("*\n");
    }

    printf("* ");
    for (int i = 1; i < n - 2; i++)
    {
        printf("* ");
    }
    printf("*\n");

    return 0;
}