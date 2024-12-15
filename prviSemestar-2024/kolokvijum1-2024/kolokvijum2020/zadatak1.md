```c
#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z;

    printf("Uneste 'x': ");
    scanf("%f", &x);
    printf("Uneste 'y': ");
    scanf("%f", &y);

    z = sqrt(x + (pow(y, y) / sqrt(x))) + pow(y, y);

    printf("Vrednost izraza je: %.2f", z);

    return 0;
}
```