```c
// Дата је датотека 'podaci2.txt' чији је садржај приказан на слици.
// Саставити програм који у постојећеој датотеци дописује текст "Pozdrav svima".

#include <stdio.h>

int main()
{
    FILE *dato;

    if ((dato = fopen("podaci2.txt", "a")) == NULL)
    {
        printf("Greška prilikom otvaranja datoteke 'podaci2.txt' za pisanje!\n");
        return 1;
    }

    fprintf(dato, "Pozdrav svima!\n");

    fclose(dato);

    getchar();
    return 0;
}
```