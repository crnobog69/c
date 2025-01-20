```c
#include <stdio.h>

int main()
{
    int a, b, x;

    printf("Unesite dva broja: ");
    scanf("%d %d", &a, &b);
    printf("Unesi POZITIVAN CEO broj: ");
    scanf("%d", &x);

    if ((a <= x * x) && (x * x <= b))
        printf("\n x*x=%d se nalazi u opsegu[%d, %d]", x * x, a, b);
    else
        printf("\n x*x=%d se ne nalazi u opsegu[%d, %d ]", x * x, a, b);

    return 0;
}

/*
Uneti donju i gornu granicu opsega a onda uneti ceo broj 'x' i da li je taj broj nalazi u opsegu
*/
```