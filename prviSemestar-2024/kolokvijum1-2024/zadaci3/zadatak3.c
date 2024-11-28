#include <stdio.h>

int main()
{
    int a;
    float b;

    printf("Unesite jedan ceo broj i jedan realan broj: ");
    scanf("%d %f", &a, &b);

    printf("\nCeo broj: %d\nRealan broj: %.2f\n", a, b);

    return 0;
}