```c
#include <stdio.h>

int main()
{
    int i = 3, n, fpp = 1, fp = 1, fn;

    printf(" n = ");
    scanf("%d", &n);

    printf("\n f1 = 1\n f2 = 1\n");

    while (i <= n)
    {
        fn = fp + fpp;
        fpp = fp;
        fp = fn;
        printf(" f%d = %d\n", i, fn);
        i++;
    }

    return 0;
}
```