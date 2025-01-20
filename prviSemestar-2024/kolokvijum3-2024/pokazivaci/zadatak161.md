```c
// Саставити функцију за рачунање обима и површине круга,
// а затим у главном програму за унети полупречник круга r,
// применити формирану функцију и исписати резултате.
// Пренос аргумената функције вршити преко показивача.

#include <stdio.h>
#define PI 3.141592

void ObimPovrsina(float r, float *O, float *P)
{
    *O = 2 * r * PI;
    *P = r * r * PI;
}

int main()
{
    float r, ob, pov;

    printf("\n Unesite poluprecnik: ");
    scanf("%f", &r);
    ObimPovrsina(r, &ob, &pov);
    printf("\n Obim: %.2f\n Povrsina: %.2f\n", ob, pov);

    getchar();
    return 0;
}
```
