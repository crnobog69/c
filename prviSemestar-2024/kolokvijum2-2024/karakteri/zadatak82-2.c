// Задатак 82:
// Саставити програм који броји празне знакове (размак, хоризонтални табулатор и нови ред),
// слова, децималне цифре као и све знакове улазног текста до ознаке за крај уноса ЕОF.

// Други начин (лакши):

#include <stdio.h>
#include <ctype.h>

int main()
{
    int c, razmak = 0, cifre = 0, slova = 0, ukupno = 0;
    while ((c = getchar()) != EOF)
    {
        if (isspace(c))
            razmak++;
        if (isdigit(c))
            cifre++;
        if (isalpha(c))
            slova++;
        ukupno++;
    }
    printf("\n Razmaci: %d", razmak);
    printf("\n Cifre: %d", cifre);
    printf("\n Slova: %d", slova);
    printf("\n Ukupno: %d", ukupno);

    getchar();
    return 0;
}