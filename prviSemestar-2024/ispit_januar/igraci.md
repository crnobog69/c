```c
#include <stdio.h>
#define MAX 100

typedef struct
{
    char ime[100];
    char prezime[100];
    float visina;
    float tezina;
    int broj_koseva;
    int broj_asistencija;
    int broj_ukradenih_lopti;
    int broj_blokada;
    float ukupno;
} Igrac;

int main()
{

    Igrac igrac[MAX];
    FILE *igraci;
    int i = 0;
    int max_index = 0;

    igraci = fopen("igraci.txt", "r");

    if (igraci == NULL)
    {
        printf("greska!");
        return 1;
    }

    while (fscanf(igraci, "%s %s %f %f %d %d %d %d", igrac[i].ime, igrac[i].prezime, &igrac[i].visina, &igrac[i].tezina, &igrac[i].broj_koseva, &igrac[i].broj_asistencija, &igrac[i].broj_ukradenih_lopti, &igrac[i].broj_blokada) == 8)
    {

        igrac[i].ukupno = igrac[i].broj_koseva * 1 + igrac[i].broj_asistencija * 0.5 + igrac[i].broj_ukradenih_lopti * 0.3 + igrac[i].broj_blokada * 0.22;

        if (igrac[i].ukupno > igrac[max_index].ukupno)
        {
            max_index = i;
        }

        i++;
        if (i == MAX)
        {
            printf("Prekoracen maksimalni broj igraca!");
            break;
        }
    }

    fclose(igraci);

    printf("\n Broj igraca: %d \n", i);
    printf("\n Igrac sa najvise poena: %s %s, Ukupno: %.2f\n", igrac[max_index].ime, igrac[max_index].prezime, igrac[max_index].ukupno);

    return 0;
}
```
