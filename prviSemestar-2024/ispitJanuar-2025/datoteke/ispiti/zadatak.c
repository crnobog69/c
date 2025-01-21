#include <stdio.h>
#include <string.h>
#define MAX 100

/*
Програм чита податке о студентима из фајла и обрађује резултате испита. Ево како ради:

1. За сваког студента чувамо:
   - Име и презиме
   - Поене са предавања
   - Поене са колоквијума
   - Поене са испита

2. Програм:
   - Чита податке из фајла ispiti.txt
   - Рачуна укупан број поена за сваког студента
   - Сортира студенте у две групе (положили/нису положили)
   - Уписује резултате у одговарајуће фајлове
   - Броји колико је студената положило/пало

Формат улазног фајла (пример):
Петар Петровић 15 25 20
(име) (презиме) (предавања) (колоквијуми) (испит)
*/

// Структура за читање података из улазног фајла
typedef struct
{
    char ime[MAX];
    char prezime[MAX];
    int predavanja;  // Поени са предавања
    int kolokvijumi; // Поени са колоквијума
    int ispit;       // Поени са испита
} Student;

// Структура за писање у излазне фајлове
typedef struct
{
    char ime[MAX];
    char prezime[MAX];
    float ukupnoPoena; // Укупан број поена
} Polaganje;

int main()
{
    Student student[MAX];
    Polaganje polaganje[MAX];
    FILE *polozili;
    FILE *nisu_polozili;
    FILE *ispiti;
    int i = 0;

    nisu_polozili = fopen("nisuPolozili.txt", "w");
    polozili = fopen("polozili.txt", "w");
    ispiti = fopen("ispiti.txt", "r");

    if (nisu_polozili == NULL || polozili == NULL || ispiti == NULL)
    {
        printf("\n Greska \n");
        return 1;
    }

    // Бројачи
    int polozili_brojac = 0, nisu_polozili_brojac = 0;

    // Читање и обрађивање студената
    while (fscanf(ispiti, "%s %s %d %d %d",
                  student[i].ime,
                  student[i].prezime,
                  &student[i].predavanja,
                  &student[i].kolokvijumi,
                  &student[i].ispit) == 5)
    {
        strcpy(polaganje[i].ime, student[i].ime);
        strcpy(polaganje[i].prezime, student[i].prezime);
        polaganje[i].ukupnoPoena = student[i].predavanja +
                                   student[i].kolokvijumi +
                                   student[i].ispit;
        i++;
    }

    int n = i;
    printf("Ucitano %d studenata.\n", n);

    for (i = 0; i < n; i++)
    {
        if (polaganje[i].ukupnoPoena > 50)
        {
            fprintf(polozili, "%s %s %.2f\n",
                    polaganje[i].ime,
                    polaganje[i].prezime,
                    polaganje[i].ukupnoPoena);
            polozili_brojac++;
        }
        else
        {
            fprintf(nisu_polozili, "%s %s %.2f\n",
                    polaganje[i].ime,
                    polaganje[i].prezime,
                    polaganje[i].ukupnoPoena);
            nisu_polozili_brojac++;
        }
    }

    fclose(polozili);
    fclose(nisu_polozili);
    fclose(ispiti);

    printf("\nBroj studenata koji su polozili: %d\n", polozili_brojac);
    printf("Broj studenata koji nisu polozili: %d\n", nisu_polozili_brojac);

    return 0;
}