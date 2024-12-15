```c
#include <stdio.h>

int main()
{
    int i = 1, suma = 0, n;
    printf(" n = ");
    scanf("%d", &n);

    while (i <= n)
    {
        suma = suma + i;
        i = i + 3;
    }

    printf(" Suma svakog trreceg broj, od 1 do %d je %d\n", n, suma);

    return 0;
}
```
