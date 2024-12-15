```c
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("================================\n");

    for (a = 1; a <= 10; a++)
        printf("%d\n", a);

    printf("================================\n");

    for (a = 1; a <= 10; a += 2)
        printf("%d\n", a);

    printf("================================\n");

    for (a = 10; a >= 1; a--)
        printf("%d\n", a);

    printf("================================\n");

    return 0;
}
```
