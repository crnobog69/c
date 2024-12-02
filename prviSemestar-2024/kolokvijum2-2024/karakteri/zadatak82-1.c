// Задатак 82:
// Саставити програм који броји празне знакове (размак, хоризонтални табулатор и нови ред),
// слова, децималне цифре као и све знакове улазног текста до ознаке за крај уноса ЕОF.

// Први начин (тежи):

#include <stdio.h>

int main()
{
    int c, razmak = 0, cifre = 0, slova = 0, ukupno = 0;
    while ((c = getchar()) != EOF)
    {
        if ((c == ' ') || (c == '\t') || (c == '\n'))
            razmak++;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            slova++;
        if (c >= '0' && c <= '9')
            cifre++;
        ukupno++;
    }
    printf("\n Razmaci: %d", razmak);
    printf("\n Slova: %d", slova);
    printf("\n Cifre: %d", cifre);
    printf("\n Ukupno: %d", ukupno);

    getchar();
    return 0;
}