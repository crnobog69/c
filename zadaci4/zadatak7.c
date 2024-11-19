#include <stdio.h>

int main()
{
    int a, b, c, d;
    a = 1;
    b = 10;
    c = 2;
    d = 1;

    while (a <= 10)
    {
        printf("%d\n", a);
        a++;
    }

    printf("\n------------------------------\n");

    while (b >= 1)
    {
        printf("%d\n", b);
        b--;
    }

    printf("\n------------------------------\n");

    while (c <= 10)
    {
        printf("%d\n", c);
        c = c + 2;
    }

    printf("\n------------------------------\n");

    while (d <= 10)
    {
        printf("%d\n", d);
        d = d + 2;
    }

    return 0;
}
