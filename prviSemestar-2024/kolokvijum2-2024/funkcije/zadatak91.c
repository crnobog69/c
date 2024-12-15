// Саставити функцију за одређивање максимума два цела броја,
// а затим саставити програм који ће за унета четири цела броја одредити највећи користећи претходну функцију и исиписати резултат.

#include <stdio.h>

int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int main()
{
    int a, b, c, d, m;

    printf(" Unesite cetiri broja: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    m = max(max(a, b), max(c, d));

    if (m == 0)
        printf(" Zadatai brojevi su isti");
    else
        printf("\n Maximum = %d\n", m);

    getchar();
    return 0;
}