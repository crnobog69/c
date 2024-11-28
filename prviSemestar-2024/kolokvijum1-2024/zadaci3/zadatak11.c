#include <stdio.h>

int main()
{
    int a, b;

    printf("Prvi broj (celi): ");
    scanf("%d", &a);
    printf("Drugi broj (celi): ");
    scanf("%d", &b);

    printf("Zbir: %d\n", a + b);
    printf("Razlika: %d\n", a - b);
    printf("Proizvod: %d\n", a * b);
    printf("Kolicnik: %d\n", a / b);
    printf("Realni koliocnik: %f\n", (float)a / (float)b);
    printf("Ostatak pri deljenu: %d\n", a % b);

    return 0;
}