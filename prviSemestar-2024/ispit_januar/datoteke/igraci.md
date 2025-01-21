```c
/*
Програм чита податке о кошаркашима из фајла и рачуна њихову ефикасност. Ево како ради:

1. За сваког играча чувамо:
   - Име и презиме
   - Физичке карактеристике (висина, тежина)
   - Статистику (кошеви, асистенције, украдене лопте, блокаде)

2. Бодовање играча:
   - Кош вреди 1 поен
   - Асистенција вреди 0.5 поена
   - Украдена лопта вреди 0.3 поена
   - Блокада вреди 0.22 поена

3. Програм:
   - Чита податке из фајла ред по ред
   - За сваког играча рачуна укупне поене
   - Памти играча са највише поенаimam
   - На крају исписује број играча и најбољег играча

Формат фајла (пример):
Петар Петровић 198.5 95.5 150 80 25 10
(име) (презиме) (висина) (тежина) (кошеви) (асист.) (украдене) (блокаде)
*/

#include <stdio.h>
#define MAX 100

typedef struct
{
    // Основни подаци о играчу
    char ime[100];
    char prezime[100];
    float visina; // у центиметрима
    float tezina; // у килограмима

    // Статистички подаци
    int broj_koseva;
    int broj_asistencija;
    int broj_ukradenih_lopti;
    int broj_blokada;

    // Укупан учинак играча
    float ukupno;
} Igrac;

int main()
{
    // Низ за чување података о играчима
    Igrac igrac[MAX];
    FILE *igraci;
    int i = 0;         // Бројач играча
    int max_index = 0; // Индекс најбољег играча

    // Отварамо фајл за читање
    igraci = fopen("igraci.txt", "r");

    // Провера да ли је фајл успешно отворен
    if (igraci == NULL)
    {
        printf("greska!");
        return 1;
    }

    // Читамо податке о играчима док их има
    while (fscanf(igraci, "%s %s %f %f %d %d %d %d",
                  igrac[i].ime, igrac[i].prezime,
                  &igrac[i].visina, &igrac[i].tezina,
                  &igrac[i].broj_koseva, &igrac[i].broj_asistencija,
                  &igrac[i].broj_ukradenih_lopti, &igrac[i].broj_blokada) == 8)
    {
        // Рачунамо укупан учинак по формули
        igrac[i].ukupno = igrac[i].broj_koseva * 1 +            // Кош = 1 поен
                          igrac[i].broj_asistencija * 0.5 +     // Асистенција = 0.5
                          igrac[i].broj_ukradenih_lopti * 0.3 + // Украдена = 0.3
                          igrac[i].broj_blokada * 0.22;         // Блокада = 0.22

        // Ажурирамо индекс најбољег играча
        if (igrac[i].ukupno > igrac[max_index].ukupno)
        {
            max_index = i;
        }

        // Прелазимо на следећег играча
        i++;

        // Провера прекорачења низа
        if (i == MAX)
        {
            printf("Prekoracen maksimalni broj igraca!");
            break;
        }
    }

    // Затварамо фајл
    fclose(igraci);

    // Исписујемо резултате
    printf("\n Broj igraca: %d \n", i);
    printf("\n Igrac sa najvise poena: %s %s, Ukupno: %.2f\n",
           igrac[max_index].ime,
           igrac[max_index].prezime,
           igrac[max_index].ukupno);

    return 0;
}
```