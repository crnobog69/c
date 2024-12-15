```c
// Саставити рекурзивну функцију за одређивање факторијела целог броја,
// а затим је тестирати у главном програму за унети цео број n и исписати добијени резултат.

#include <stdio.h>

int Faktorijel(int n)
{
    if (n == 1)
        return 1;
    return n * Faktorijel(n - 1);
}

int main()
{
    int n;

    printf(" n = ");
    scanf("%d", &n);
    printf("%d!= % d\n", n, Faktorijel(n));

    getchar();
    return 0;
}
```
