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
}