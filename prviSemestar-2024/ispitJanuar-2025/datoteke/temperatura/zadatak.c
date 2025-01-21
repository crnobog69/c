#include <stdio.h>
#define MAX 100

/*
Програм чита температуре из фајла и обрађује их. Ево како ради:

1. За сваки дан чувамо:
   - Редни број дана
   - Температуру у 7h
   - Температуру у 13h
   - Температуру у 19h
   - Просечну дневну температуру

2. Програм:
   - Чита податке из фајла temperature.txt
   - Рачуна просечну дневну температуру за сваки дан
   - Сортира дане по просечној температури (опадајуће)
   - Памти суме за израчунавање просека по терминима (7h, 13h, 19h)
   - Уписује сортиране резултате у prosecne.txt

Формат улазног фајла (пример):
01 20 31 25
(дан) (темп_7h) (темп_13h) (темп_19h)
*/

typedef struct
{
    int dan;

    int temp7;
    int temp13;
    int temp19;

    float prosek;
} Temperature;

int main()
{
    Temperature temp[MAX];
    FILE *prosecne;
    FILE *temperature;
    int i = 0;
    float suma7 = 0, suma13 = 0, suma19 = 0;

    temperature = fopen("temperature.txt", "r");
    prosecne = fopen("prosecne.txt", "w");

    if (prosecne == NULL || temperature == NULL)
    {
        printf("\n Greska \n");
        return 1;
    }

    while (fscanf(temperature, "%d %d %d %d",
                  &temp[i].dan,
                  &temp[i].temp7,
                  &temp[i].temp13,
                  &temp[i].temp19) == 4)
    {
        temp[i].prosek = (temp[i].temp7 + temp[i].temp13 + temp[i].temp19) / 3.0;
        suma7 += temp[i].temp7;
        suma13 += temp[i].temp13;
        suma19 += temp[i].temp19;
        i++;
    }

    int n = i; // Укупан број дана
    int j;
    Temperature tmp; // Привремена променљива за замену вредности

    // Сортирање по просечној температури (опадајуће)
    // Користимо bubble sort алгоритам
    for (i = 0; i < n - 1; i++) // Пролазимо кроз све елементе осим последњег
    {
        // За сваки елемент проверавамо све преостале
        for (j = i + 1; j < n; j++)
        {
            // Ако је следећи елемент већи, заменимо их
            // (за опадајући редослед користимо '>')
            if (temp[j].prosek > temp[i].prosek)
            {
                // Замена елемената помоћу привремене променљиве
                tmp = temp[i];     // Чувамо тренутни елемент
                temp[i] = temp[j]; // Постављамо већи на текућу позицију
                temp[j] = tmp;     // Враћамо сачувани на позицију већег
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        fprintf(prosecne, "Dan %d: %.2f\n", temp[i].dan, temp[i].prosek);
    }

    printf("Najtopliji dan: %d (%.2f)\n", temp[0].dan, temp[0].prosek);
    printf("Najhladniji dan: %d (%.2f)\n", temp[n - 1].dan, temp[n - 1].prosek);
    printf("\nProsecne temperature:\n");
    printf("07h: %.2f\n", suma7 / n);
    printf("13h: %.2f\n", suma13 / n);
    printf("19h: %.2f\n", suma19 / n);

    fclose(temperature);
    fclose(prosecne);

    getchar();
    return 0;
}