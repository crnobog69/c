```c
// Саставити рекурзивну функцију која исписује првих n бројева у обрнутом редследу,
// а затим тестирати функцију за дато n.

#include <stdio.h>

void Stampaj(unsigned int n)
{
    if (n == 0)
        return;

    printf(" %d", n);
    Stampaj(n - 1); // Функција позиува саму себе и тиме прави`петљу`
}

int main()
{
    int n;

    printf(" n = ");
    scanf("%d", &n);

    Stampaj(n);

    getchar();
    return 0;
}
```
