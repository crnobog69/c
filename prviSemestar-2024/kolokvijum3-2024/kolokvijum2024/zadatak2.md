```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *originalniNiz, *noviNiz;

    printf("Унесите број елемената низа: ");
    scanf("%d", &n);

    // Динамичка алокација меморије за оригинални низ
    originalniNiz = (int *)malloc(n * sizeof(int));
    if (originalniNiz == NULL)
    {
        printf("Грешка при алокацији меморије.\n");
        return 1;
    }

    // Динамичка алокација меморије за нови низ
    noviNiz = (int *)malloc(n * sizeof(int));
    if (noviNiz == NULL)
    {
        printf("Грешка при алокацији меморије.\n");
        return 1;
    }

    // Унос елемената у оригинални низ
    printf("Унесите елементе низа:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &originalniNiz[i]);
    }

    // Формирање новог низа са дуплираним вредностима
    for (i = 0; i < n; i++)
    {
        noviNiz[i] = originalniNiz[i] * 2;
    }

    // Испис новог низа
    printf("Нови низ са дуплираним вредностима:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", noviNiz[i]);
    }
    printf("\n");

    // Ослобађање динамички алоциране меморије
    free(originalniNiz);
    free(noviNiz);

    getchar();
    return 0;
}

```
