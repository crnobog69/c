```c
// Саставити рекурзивну функцију која одређује и исписује n - ти члан Фибоначијевог низа,
// а затим тестирати функцију за дато n.
// Фибоначијев низ је : f1 = 1, f2 = 1, fi = fi - 1 + fi - 2, i = 3, 4, 5, ...

#include <stdio.h>

int Fib(int n)
{
    if ((n == 0) || n == 1)
        return 1;
    else
        return (Fib(n - 1) + Fib(n - 2));
}

int main()
{
    int n;
    printf(" n = ");
    scanf("%d", &n);

    printf(" Fib[%d] = %d\n", n, Fib(n - 1));

    getchar();
    return 0;
}
```