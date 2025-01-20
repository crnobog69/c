```c
// Саставити програм који креира датотеку 'podaci6.txt' чији је садржај приказан на слици.
//  Користити функције за уписивање у датотеку 'fprint()', 'fputs()', 'fputc()'.

#include <stdio.h>

int main()
{
    FILE *dato;

    dato = fopen("podaci6.txt", "w");

    if (dato == NULL)
    {
        printf("Greška prilikom otvaranja datoteke 'podaci6.txt' za pisanje!\n");
        return 1;
    }

    fprintf(dato, "Ovo je datoteka.\n");
    fprintf(dato, "Pozdrav svima!\n");
    fprintf(dato, "%d + %d = %d\n", 123, 456, 123 + 456);

    /* Функција 'fputc' уписује један карактер у датотецу. */
    fputc('A', dato);

    /* Функција 'fputs' upisuje ниску у датотеку. */
    fputs("\nKraj datoteke.", dato);

    fclose(dato);

    getchar();
    return 0;
}
```