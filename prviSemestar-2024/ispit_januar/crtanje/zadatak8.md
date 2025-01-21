```c
#include <stdio.h>

/*

    n = 9:

    +-------+   // Горња ивица
    |   |   |   // Горњи део
    |   |   |
    |   |   |
    |---+---|   // Средња линија
    |   |   |   // Доњи део
    |   |   |
    |   |   |
    +-------+   // Доња ивица

*/

int main()
{

    int i, j, n, sredina;

    printf("Паран и позитиван: n: ");
    scanf("%d", &n);

    sredina = n / 2;

    // Горња ивица
    printf("+");
    for (i = 0; i < n - 2; i++)
        printf("-");
    printf("+\n");

    // Горњи део
    for (i = 0; i < sredina - 1; i++)
    {
        printf("|");
        for (j = 0; j < sredina - 1; j++)
            printf(" ");
        printf("|");
        for (j = 0; j < sredina - 1; j++)
            printf(" ");
        printf("|\n");
    }

    // Средња линија
    printf("|");
    for (i = 0; i < sredina - 1; i++)
        printf("-");
    printf("+");
    for (i = 0; i < sredina - 1; i++)
        printf("-");
    printf("|\n");

    // Доњи део
    for (i = 0; i < sredina - 1; i++)
    {
        printf("|");
        for (j = 0; j < sredina - 1; j++)
            printf(" ");
        printf("|");
        for (j = 0; j < sredina - 1; j++)
            printf(" ");
        printf("|\n");
    }

    // Доња ивица
    printf("+");
    for (i = 0; i < n - 2; i++)
        printf("-");
    printf("+\n");

    getchar();
    return 0;
}

```