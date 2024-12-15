```c
#include <stdio.h>
#include <math.h>

float R, C, U0;

float Uc(float t)
{
    return U0 * (1 - exp(-t / (R * C)));
}

float Ur(float t)
{
    return U0 - Uc(t);
}

int main()
{
    float t;

    printf("\n R[kOhm] = ");
    scanf("%f", &R);
    printf("\n C[uF] = ");
    scanf("%f", &C);
    printf("\n U0[V] = ");
    scanf("%f", &U0);

    R *= 1e3;
    C *= 1e-6;

    printf("\n      Vreme           N a p o n  n a ");
    printf("\n       [ms]       kondenzatoru orporniku");

    for (t = 0; t <= R * C; t = t + R * C / 10)
        printf("\n%7.2f         %9.3f   %9.3f", t * 1e3, Uc(t), Ur(t));

    getchar();
    return 0;
}
```
