```c
#include <stdio.h>

int main()
{
    int i, BrElem;
    int niz[] = {1, 2, 3, 4, 5, 6};

    BrElem = sizeof(niz) / sizeof(int);

    for (i = 0; i < BrElem; i++)
        printf(" niz[%d] = %d\n", i, niz[i]);

    getchar();
    return 0;
}
```
