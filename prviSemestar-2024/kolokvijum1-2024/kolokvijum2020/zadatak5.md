```c
#include <stdio.h>

int main()
{
    int a;
    for (a = 1; a <= 999; a++)
        if (a % 3 == 0 && a % 4 == 0 && a % 7 == 0 && a % 9 == 0)
        {
            printf("\n\t%d\n", a);
            break;
        }
}
```