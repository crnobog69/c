#include <stdio.h>

int main()
{
    int i, j, n;

    printf(" n = ");
    scanf("%d", &n);

    printf("+");
    for (i = 0; i < n - 2; i++)
    {
        printf("-");
    }
    printf("+\n");

    getchar();
    return 0;
}