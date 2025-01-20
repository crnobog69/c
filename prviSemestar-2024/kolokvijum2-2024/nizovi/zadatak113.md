```c
// Програм спаја два низа целих бројева у један и исписује резултујући низ.

#include <stdio.h>
#define MAX 100

int main()
{
    int i, n, m, nizA[MAX], nizB[MAX], nizC[MAX];

    // Унос броја елемената низа А
    printf(" Број елемената низа A: ");
    scanf("%d", &n);
    // Унос елемената низа А
    printf(" Унесите %d елемента низа A: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nizA[i]);

    // Унос броја елемената низа Б
    printf(" Број елемената низа B: ");
    scanf("%d", &m);
    // Унос елемената низа Б
    printf(" Унесите %d елемента низа B: \n", m);
    for (i = 0; i < m; i++)
        scanf("%d", &nizB[i]);

    // Испис елемената низа Ц
    printf(" Елементи низа C: ");
    for (i = 0; i < n + m; i++)
    {
        if (i < n)
            nizC[i] = nizA[i]; // Први део низа Ц је низ А
        else
            nizC[i] = nizB[i - n]; // Други део низа Ц је низ Б
        printf("%d ", nizC[i]);
    }

    getchar();
    return 0;
}
```