#include <stdio.h>

int main()
{
    /*

    j=0   j=1  j=2  j=3  j=4
    i=0    +    -    -    -    +
    i=1    |    \    X    /    |
    i=2    |    /    \    \    |
    i=3    +    -    -    -    +

    */

    int i, j, n;

    printf(" n = ");
    scanf("%d", &n);

    printf("\n");

    for (i = 0; i < 2 * n - 1; i++)
    {
        if (i == 0 || i == n - 1 || i == 2 * n - 2)
        {
            printf("+");
        }
        else
        {
            printf("-");
        }
    }

    printf("\n");

    for (j = 0; j < n - 2; j++)
    {
        for (i = 0; i < 2 * n - 1; i++)
        {
            if (i == 0 || i == n - 1 || i == 2 * n - 2)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < 2 * n - 1; i++)
    {
        if (i == 0 || i == n - 1 || i == 2 * n - 2)
        {
            printf("+");
        }
        else
        {
            printf("-");
        }
    }

    printf("\n");

    getchar();
    return 0;
}