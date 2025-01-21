#include <stdio.h>

/*

n = 7

+-----+
|\    |
| \   |
|  \  |
|   \ |
|    \|
+-----+

*/

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

    printf("+");
    for (i = 0; i < n - 2; i++)
    {
        printf("-");
    }
    printf("+\n");

    for (i = 0; i < n - 2; i++)
    {
        printf("|");

        for (j = 0; j < n - 2; j++)
        {
            if (j == i)
            {
                printf("\\");
            }

            /*

            Споредна дијагонала:

            if (j == n - 2 - i - 1)
            {
                printf("/");
            }

            */

            else
            {
                printf(" ");
            }
        }

        printf("|\n");
    }

    printf("+");
    for (i = 0; i < n - 2; i++)
    {
        printf("-");
    }
    printf("+\n");

    getchar();
    return 0;
}