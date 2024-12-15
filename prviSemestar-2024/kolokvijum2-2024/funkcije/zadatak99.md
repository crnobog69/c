```c
#include <stdio.h>
#include <math.h>

float x, xmin, dx;

float f1(float x)
{
    return sin(x) / x;
}

float f2(float x)
{
    return f1(x) * f1(x);
}

int main()
{
    printf("\n xmin[xmin<1] = ");
    scanf("%f", &x);
    printf("\n dx[xkor < 0.1] = ");
    scanf("%f", &dx);

    printf("\n   x       f1(x)       f2(x)");

    for (x = 1; x >= xmin; x -= dx)
        printf("\n%5.2f%9.5f%9.5f", x, f1(x), f2(x));

    getchar();
    return 0;
}
```