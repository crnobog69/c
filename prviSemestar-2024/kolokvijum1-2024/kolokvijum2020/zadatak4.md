```c
#include <stdio.h>

int main()
{
    int i = 3, n, fpp = 1, fp = 1, fn, s = 2;

    printf(" n = ");
    scanf("%d", &n);

    while (i <= n)
    {
        fn = fp + fpp;
        s = s + fn;
        fpp = fp;
        fp = fn;
        i++;
    }
    printf("\n s = %d\n", s);

    return 0;
}
```
