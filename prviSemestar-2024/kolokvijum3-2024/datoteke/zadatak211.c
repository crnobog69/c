// Саставити програм који употребом функције fgets() чита садржај датотеке podaci6.txt и исписује га на екрану.
// Максимална дужина која се чита је по 20 знакова.

#include <stdio.h>
#define MAX 20

int main()
{
    FILE *dato;
    char str[MAX];
    dato = fopen("podaci6.txt", "r");

    if (dato == NULL)
    {
        printf("Greška prilikom otvaranja datoteke 'podaci6.txt' za čitanje!\n");
        return 1;
    }

    /* Функција 'fgets' чита из датотеке ниску до следећег знака нове линије или max-1 знакова */
    while (fgets(str, MAX, dato) != NULL)
    {
        puts(str);
    }

    fclose(dato);

    getchar();
    return 0;
}