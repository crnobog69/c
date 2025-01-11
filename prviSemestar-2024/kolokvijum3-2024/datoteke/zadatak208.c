// Дата је датотека 'BrojeviStari.txt' која у сваком реду садржи по један цео број.
// Саставити програм који формира датотеку 'BrojeviNovi.txt' тако што из датотеке 'BrojeviStari.txt' преписује бројеве из парних редова,
// а из непарних удвостручује.

#include <stdio.h>

int main()
{
    int broj, i = 1;
    FILE *a;
    FILE *b;

    if ((a = fopen("BrojeviStari.txt", "r")) == NULL)
    {
        printf("Greška prilikom otvaranja datoteke 'BrojeviStari.txt' za čitanje!\n");
        return 1;
    }
    if ((b = fopen("BrojeviNovi.txt", "w")) == NULL)
    {
        printf("Greška prilikom otvaranja datoteke 'BrojeviNovi.txt' za pisanje!\n");
        return 1;
    }

    while (fscanf(a, "%d", &broj) != EOF)
    {
        if (i % 2 == 0)
        {
            fprintf(b, "%d\n", broj);
        }
        else
        {
            fprintf(b, "%d\n", 2 * broj);
        }
        i++; // Add line counter increment
    }

    fclose(a);
    fclose(b);

    getchar();
    return 0;
}