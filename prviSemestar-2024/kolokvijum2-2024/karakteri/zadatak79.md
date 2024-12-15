```c
// Задатак 79
// Шта се исписује на екрану након извршавања следећег програмског кода:

#include <stdio.h>

int main()
{
    putchar('\n');
    putchar('a');
    putchar('\n');
    putchar('A');
    putchar('\n');
    putchar('A' + 10);
    putchar('\n');
    putchar('a' + 3);

    getchar();
    return 0;
}
```