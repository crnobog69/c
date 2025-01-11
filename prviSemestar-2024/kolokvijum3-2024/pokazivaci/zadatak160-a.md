```c
#include <stdio.h>

int main()
{
    int x, prom = 5, *pokaz;
    pokaz = &prom;
    x = *pokaz;

    printf(" prom = 5d\n x = %d \n", prom, x);

    getchar();
    return 0;
}
```