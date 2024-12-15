```c
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, m;

    printf(" a = ");
    scanf("%f", &a);
    printf(" b = ");
    scanf("%f", &b);

    m = sqrt(a * a + b * b);

    printf("Modul kompleksnog broja %.2f + %.2fi je %.2f", a, b, m);

    return 0;
}
```
