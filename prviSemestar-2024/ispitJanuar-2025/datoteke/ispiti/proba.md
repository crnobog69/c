```c
#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct
{
    char ime[MAX];
    char prezime[MAX];

    int predavanja;
    int kolokvijumi;
    int ispit;
} Student;

typedef struct
{
    char ime[MAX];
    char prezime[MAX];

    float ukupnoPoena;
} Polaganje;

int main()
{
    Student student[MAX];
    Polaganje polaganje[MAX];
    FILE *polozili;
    FILE *nisu_polozili;
    int i = 0;

    nisu_polozili = fopen("nisuPolozili.txt", "w");
    polozili = fopen("polozili.txt", "w");

    if (nisu_polozili == NULL || polozili == NULL)
    {
        printf("\n Greska \n");
        return 1;
    }

    // Read and process students
    while (fscanf(nisu_polozili, "%s %s %d %d %d",
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

    printf("%s", polaganje[i].ime);

    int n = i;
    for (i = 0; i < n; i++)
    {
        if (polaganje[i].ukupnoPoena > 50)
        {
            fprintf(polozili, "%s %s %.2f\n",
                    polaganje[i].ime,
                    polaganje[i].prezime,
                    polaganje[i].ukupnoPoena);
        }
        else
        {
            fprintf(nisu_polozili, "%s %s %.2f\n",
                    polaganje[i].ime,
                    polaganje[i].prezime,
                    polaganje[i].ukupnoPoena);
        }
    }

    fclose(polozili);
    fclose(nisu_polozili);

    getchar();
    return 0;
}
```
