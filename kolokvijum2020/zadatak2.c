#include <stdio.h>

int main()
{
    int a;

    printf("Unesite ceo broj: ");
    scanf("%d", &a);

    if (a % 2 == 0 && a > 0)
    {
        printf("Broj je paran.\n");

        printf("Trostruka vrednost broja je: %d\n", a * 3);
    }
    else
    {
        printf("Broj je neparan.\n");
    }

    if (a < 0)
    {
        printf("Trecina broja je: %.2f\n", a / 3.0);
    }

    return 0;
}