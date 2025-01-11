```c
#include <stdio.h>

void DivIMod(int x, int y, int *div, int *mod)
{
    printf("\n Kolicnik postavljen na adresu: %p", div);
    printf("\n Modul postavljen na adresu: %p", mod);

    *div = x / y;
    *mod = x % y;
}

int main()
{
    int a, b, div, mod;

    printf("\n a = ");
    scanf("%d", &a);
    printf("\n b = ");
    scanf("%d", &b);

    printf("\n Adresa promenljive div: %p", &div);
    printf("\n Adresa promenljive mod: %p", &mod);

    DivIMod(a, b, &div, &mod);

    printf("\n Vrednost promenljive div: %d", div);
    printf("\n Vrednost promenljive mod: %d\n", mod);

    getchar();
    return 0;
}
```