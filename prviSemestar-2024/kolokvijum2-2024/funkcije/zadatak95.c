// Саставити функцију за степеновање бројева.
// Затим саставити програм који помоћу формиране функције врши рачунање за дати број и степен и исписује резултат.

#include <stdio.h>

double Stepen(double x, int n)
{
    int i, negative;
    double s = 1.0;

    negative = n < 0;
    if (negative)
        n = -n;
    for (i = 0; i < n; i++)
        s *= x;
    if (negative)
        return (1 / s);
    else
        return (s);
}

int main()
{
    int n;
    double x, s;

    printf("\n Osnova: ");
    scanf("%lf", &x);
    printf("\n n = ");
    scanf("%d", &n);

    s = Stepen(x, n);

    printf("\n Rezultat: %.2f\n", s);

    getchar();
    return 0;
}