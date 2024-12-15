```c
#include <stdio.h>

int main()
{
    int a, b, zbir, razlika, proizvod, kolicnik;

    printf("Unesite prvi broj: ");
	scanf("%d", &a);
    printf("Unesite drugi broj: ");
	scanf("%d", &b);

    zbir = a + b;
    razlika = a - b;
    proizvod = a * b;
    kolicnik = a / b;

    printf("Zbir je: %d\n", zbir);
    printf("Razlika je: %d\n", razlika);
    printf("Proizvod je: %d\n", proizvod);
    printf("Kolicnik je: %d\n", kolicnik);

    return 0;
}
```
