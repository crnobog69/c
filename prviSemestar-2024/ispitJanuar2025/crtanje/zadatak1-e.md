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

    int i, j, k, n;

    printf(" n = ");
    scanf("%d", &n);

    printf("\n");

    for (i = n; i >= 1; i--)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getchar();
    return 0;
}
```