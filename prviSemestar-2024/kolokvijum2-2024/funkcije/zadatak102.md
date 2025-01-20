```c
// Саставити рекурзивну функцију која врши сабирање првих n бројева,
// а затим тестирати функцију за дато n и исписати добијени резултат.

#include <stdio.h>

int Suma(int n)
{
    if (n == 0)
        return 0;
    else
        return (n + Suma(n - 1));
}

int main()
{
    int s, n;

    printf(" n = ");
    scanf("%d", &n);

    s = Suma(n);

    printf("\n s = %d\n", s);

    getchar();
    return 0;
}
```
