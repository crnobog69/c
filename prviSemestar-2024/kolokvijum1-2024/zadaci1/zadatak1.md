```c
#include <stdio.h>

int main()
{
    int a, b, zbir, proizvod, razlika, celobrojniKolicnik, celobrojnoDeljenje;
    float realniKolicnik;

    printf(" a = ");
    scanf("%d", &a);
    printf(" b = ");
    scanf("%d", &b);

    zbir = a + b;

    printf("\nZbir je: %d\n", zbir);

    razlika = a - b;

    printf("\nRazlika je: %d\n", razlika);

    proizvod = a * b;

    printf("\nProizvod je: %d\n", proizvod);

    celobrojniKolicnik = a / b;

    printf("\nCelobrojni kolicnik je: %d\n", celobrojniKolicnik);

    realniKolicnik = (float)a / (float)b;

    printf("\nRealni kolicnik: %.2f\n", realniKolicnik);

    celobrojnoDeljenje = a % b;

    printf("\nCelobrojno deljenje: %d\n", celobrojnoDeljenje);

    return 0;
}
```
