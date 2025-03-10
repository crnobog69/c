// Саставити програм којим се у датотеку 'podaci.txt' уписује првих 10 целих бројева,
// а затим се из исте датотеке читају бројеви док се не достигне до краја датотеке,
// и на крају се бројеви исписују на стандарни излаз (екран).

#include <stdio.h>

int main()
{
    int i, br;
    FILE *dato; /*Декларисање показивача на датотеку */
    /* Отварамо датотеку са именом 'podaci.txt' за писање */
    dato = fopen("podaci.txt", "w");

    /* Уколико отварање није успоело, 'fopen' враћа NULL.
       У том случају, пријављујемо грешку и завршавамо програм */
    if (dato == NULL)
    {
        printf("Greška prilikom otvaranja datoteke 'podaci.txt' za pisanje!\n");
        return 1;
    }

    /* Уписујемо у датотеку првих 10 природних бројева (сваки у посебном реду) */
    for (i = 0; i < 10; i++)
    {
        fprintf(dato, "%d\n", i);
    }

    /* Затварамо датотеку */
    fclose(dato);

    /* Отварамо датотеку са именом 'podaci.txt' за читање */
    dato = fopen("podaci.txt", "r");

    /* Уколико отварање није успело, 'fopen' враћа NULL.
       У том случају, пријављујемо грешку и затварамо програм */

    if (dato == NULL)
    {
        printf("Greška prilikom otvaranja datoteke 'podaci.txt' za citanje!\n");
        return 1;
    }

    /* Читамо бројеве из датотеке док не стигнемоп до краја датотеке
       и исписујемо их на стандарни излаз */

    while (1)
    {
        /* Покушавамо да прочитамо број */
        fscanf(dato, "%d", &br);

        /* Уколико смо дошли доп краја датотеке, прекидамо */
        if (feof(dato))
        {
            break;
        }

        printf(" Procitano: %d\n", br);
    }

    fclose(dato);

    getchar();
    return 0;
}