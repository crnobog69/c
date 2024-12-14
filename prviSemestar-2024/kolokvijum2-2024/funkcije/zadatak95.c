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
}