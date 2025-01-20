```c
// 2. Zadatak: Formiranje dva niza BB (negativni elementi) i CC (pozitivni elementi i nule) i računanje srednje vrednosti

#include <stdio.h>

int main()
{
    int duzina;
    printf("Unesite duzinu niza: ");
    scanf("%d", &duzina);

    int nizA[duzina], nizB[duzina], nizC[duzina];
    int brojacB = 0, brojacC = 0;
    int sumaB = 0, sumaC = 0;

    printf("Unesite elemente niza A:\n");
    for (int i = 0; i < duzina; i++)
    {
        scanf("%d", &nizA[i]);
        if (nizA[i] < 0)
        {
            nizB[brojacB++] = nizA[i];
            sumaB += nizA[i];
        }
        else
        {
            nizC[brojacC++] = nizA[i];
            sumaC += nizA[i];
        }
    }

    printf("Niz B: ");
    for (int i = 0; i < brojacB; i++)
    {
        printf("%d ", nizB[i]);
    }
    printf("\nSrednja vrednost niza B: %.2f\n", brojacB > 0 ? (double)sumaB / brojacB : 0);

    printf("Niz C: ");
    for (int i = 0; i < brojacC; i++)
    {
        printf("%d ", nizC[i]);
    }
    printf("\nSrednja vrednost niza C: %.2f\n", brojacC > 0 ? (double)sumaC / brojacC : 0);

    return 0;
}

```
