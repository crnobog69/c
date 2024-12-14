#include <stdio.h>
#include <math.h>

double Ekspon(double x, int n)
{
    double ex = 1, clan = 1;
    int i;

    for (i = 1; i < n; i++)
    {
        clan *= x / i;
        ex += clan;
    }

    return ex;
}

int main()
{
    double x, ex, ext, apsgr;
    int n;

    printf(" x = ");
    scanf("%lf", &x);
    printf(" n = ");
    scanf("%d", &n);

    ex = Ekspon(x, n);
    ext = exp(x);
    apsgr = fabs(ex - ext);

    printf("\n Izracunato = %.4f", ex);
    printf("\n Tacno = %.4f", ext);
    printf("\n ASPGR = %.4f", apsgr);

    getchar();
    return 0;
}