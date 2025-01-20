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

    int i, j, n;

    printf(" n = ");
    scanf("%d", &n);

    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    getchar();
    return 0;
}
```