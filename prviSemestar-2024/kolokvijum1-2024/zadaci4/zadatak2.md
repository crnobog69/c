```c
#include <stdio.h>

int main()
{
    int a, b, c;

    // zadatak 29-a
    for (a = 1; a <= 10; a++)
        printf("%d\n", a);

    printf("\n----------\n\n");

    // zadatak 29-b

    for (c = 1; c <= 10; c = c + 2)
        printf("%d\n", c);

    printf("\n----------\n\n");

    // zadatak 29-c
    for (b = 10; b >= 1; b--)
        printf("%d\n", b);

    return 0;
}
```