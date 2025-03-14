#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DANI 10
#define MAX_DUZINA_DATUMA 10

typedef struct
{
    char datum[MAX_DUZINA_DATUMA];
    float temp7, temp13, temp19, prosecna;
} Dan;
int compare(const void *a, const void *b)
{
    Dan *da = (Dan *)a;
    Dan *db = (Dan *)b;
    return db->prosecna - da->prosecna;
}

int main()
{
    char ulazna[50], izlazna[50];
    FILE *fp_ulaz, *fp_izlaz;
    Dan dani[MAX_DANI];
    int n = 0;
    float sum7 = 0, sum13 = 0, sum19 = 0;
    printf("Unesite ime ulazne datoteke: ");
    scanf("%s", ulazna);
    printf("Unesite ime izlazne datoteke: ");
    scanf("%s", izlazna);
    fp_ulaz = fopen(ulazna, "r");
    if (fp_ulaz == NULL)
    {
        perror("Greska pri otvaranju ulazne datoteke");
        return 1;
    }
    while (fscanf(fp_ulaz, "%s %f %f %f", dani[n].datum, &dani[n].temp7, &dani[n].temp13, &dani[n].temp19) != EOF)
    {
        dani[n].prosecna = (dani[n].temp7 + dani[n].temp13 + dani[n].temp19) / 3;
        n++;
    }
    fclose(fp_ulaz);
    qsort(dani, n, sizeof(Dan), compare);
    fp_izlaz = fopen(izlazna, "w");
    if (fp_izlaz == NULL)
    {
        perror("Greska pri otvaranju izlazne datoteke");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(fp_izlaz, "%s %.2f\n", dani[i].datum, dani[i].prosecna);
        sum7 += dani[i].temp7;
        sum13 += dani[i].temp13;
        sum19 += dani[i].temp19;
    }
    fclose(fp_izlaz);
    printf("Najtopliji dan: %s (%.2f°C)\n", dani[0].datum, dani[0].prosecna);
    printf("Najhladniji dan: %s (%.2f°C)\n", dani[n - 1].datum, dani[n - 1].prosecna);
    printf("Prosecna temperatura u 7h: %.2f°C\n", sum7 / n);
    printf("Prosecna temperatura u 13h: %.2f°C\n", sum13 / n);
    printf("Prosecna temperatura u 19h: %.2f°C\n", sum19 / n);

    return 0;
}