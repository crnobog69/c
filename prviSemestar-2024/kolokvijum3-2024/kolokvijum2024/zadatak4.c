#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ulazna, *parni, *neparni;
    int broj;

    // Отварање улазне датотеке за читање
    ulazna = fopen("ulaz.txt", "r");
    if (ulazna == NULL)
    {
        printf("Грешка при отварању улазне датотеке.\n");
        return 1;
    }

    // Отварање излазних датотека за писање
    parni = fopen("parni.txt", "w");
    if (parni == NULL)
    {
        printf("Грешка при отварању датотеке за парне бројеве.\n");
        fclose(ulazna);
        return 1;
    }

    neparni = fopen("neparni.txt", "w");
    if (neparni == NULL)
    {
        printf("Грешка при отварању датотеке за непарне бројеве.\n");
        fclose(ulazna);
        fclose(parni);
        return 1;
    }

    // Читање бројева из улазне датотеке и разврставање
    while (fscanf(ulazna, "%d", &broj) != EOF)
    {
        if (broj % 2 == 0)
        {
            fprintf(parni, "%d\n", broj); // Упис у датотеку за парне бројеве
        }
        else
        {
            fprintf(neparni, "%d\n", broj); // Упис у датотеку за непарне бројеве
        }
    }

    printf("Разврставање је успешно завршено.\n");

    // Затварање свих датотека
    fclose(ulazna);
    fclose(parni);
    fclose(neparni);

    return 0;
}
