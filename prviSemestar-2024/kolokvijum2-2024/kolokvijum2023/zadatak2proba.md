```c
#include <stdio.h>
#define MAX 100

int main()
{
    int nizA[MAX], nizB[MAX], nizC[MAX];
    int i, n, j = 0, k = 0;
    float sumaA = 0, sumaB = 0;

    printf("Unesite duzinu niza A: ");
    scanf("%d", &n);

    printf("Unesite elemente niza A: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nizA[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (nizA[i] < 0)
        {
            nizB[j] = nizA[i];
            j++;
        }
        else
        {
            nizC[k] = nizA[i];
            k++;
        }
    }

    printf("\n Elementi niza B: ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", nizB[i]);
    }
    printf("\n Elementi niza C: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", nizC[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        sumaA += (float)nizA[i];
    }

    for (i = 0; i < j; i++)
    {
        sumaB += (float)nizB[i];
    }

    printf("\n Srednja vrednost niza A: %.2f", sumaA / (float)n);
    printf("\n Srednja vrednost niza B: %.2f", sumaB / (float)j);

    getchar();
    return 0;
}
```
