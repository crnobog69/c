```c
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

    int n, i, j, k, m;

    printf(" n = ");
    scanf("%d", &n);

    printf("\n");

    for (i = n; i > 0; i--)
    {
        m = i;

        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("%d ", m);
        }
        printf("\n");
    }

    for (i = 2; i <= n; i++)
    {
        m = i;

        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("%d ", m);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
```