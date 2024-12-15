```c
#include <stdio.h>

int main()
{
    int i = 3, n, fpp = 1, fp = 1, fn, suma = 2;

    printf(" n = ");
    scanf("%d", &n);

    while (i <= n)
    {
        fn = fp + fpp;
        suma = suma + fn;
        fpp = fp;
        fp = fn;
        i++;
    }

    printf("\n s = %d\n", suma);

    return 0;
}
```
