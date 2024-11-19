#include <stdio.h>
#define PI 3.141962

int main()
{
    double r, h, povrsina, zapremina;

    printf("(h) Unesite visinu: ");
    scanf("%lf", &h);
    printf("(r) Unesite poluprecnik: ");
    scanf("%lf", &r);

    povrsina = 2 * r * PI * (r + h);

    zapremina = r * r * PI * h;

    printf("----------------------------");

    printf("\n(P) Povrsina je: %.4lf\n", povrsina);

    printf("\n(V) Zapremina je: %.4lf\n", zapremina);

    printf("----------------------------");

    return 0;
}