```c
// Саставити програм који исписује све просте бројеве мање од 500.
// Користити функцију за одређивање простих бројева.

#include <stdio.h>

int Prost(int broj)
{
    int i;

    for (i = 2; i < broj; i++)
        if (broj % i == 0)
            return 0;
    return 1;
}

int main()
{
    int i;

    for (i = 1; i <= 500; i++)
        if (Prost(i) == 1)
            printf("%d\t", i);

    getchar();
    return 0;
}
```
