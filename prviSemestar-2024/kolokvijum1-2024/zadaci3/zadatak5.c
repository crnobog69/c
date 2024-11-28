#include <stdio.h>

int main()
{
    int a;

    printf("Unesite ceo broj: ");
    scanf("%d", &a);

    if (a > 12)
    {
        printf("\nDecimalni zapis: %d", a);
        printf("\nOktalni zapis: %o", a);
        printf("\nHeksadecimalni zapis: %x", a);
    }
    else
    {
        printf("Greska");
    }

    return 0;
}