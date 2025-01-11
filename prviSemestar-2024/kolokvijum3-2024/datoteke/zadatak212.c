// Саставити програм који преписује садржај датотеке podaci6.txt
// у датотеку podaci6А.txt уз промену малог слова 'а' у велико 'А'.
// Имена датотека се уносе са тастатуре.

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *ulaz, *izlaz;
    char imeUlaz[50], imeIzlaz[50];
    char znak;

    printf("Unesite ime ulazne datoteke: ");
    scanf("%s", imeUlaz);
    printf("Unesite ime izlazne datoteke: ");
    scanf("%s", imeIzlaz);

    ulaz = fopen(imeUlaz, "r");
    izlaz = fopen(imeIzlaz, "w");

    if (ulaz == NULL || izlaz == NULL)
    {
        puts("Greska prilikom otvaranja datoteka!");
        return 1;
    }

    while ((znak = fgetc(ulaz)) != EOF)
    {
        if (znak == 'a')
        {
            znak = 'A';
        }
        fputc(znak, izlaz);
    }

    fclose(ulaz);
    fclose(izlaz);

    getchar();
    return 0;
}