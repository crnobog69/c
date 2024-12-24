// Саставити програм који ће за унети низ (дужине n) целих бројева одредити и исписати:
// а) суму парних и суму непарних бројева;
// б) суму елемената са парним индексима и суму елемената са непарним индексима.
//
// --------------------------------------------
//
// а) суму парних и суму непарних бројева;

#include <stdio.h>
#define MAX 100 // Максимална величина низа

int main()
{
    int i, n, niz[MAX], sumap = 0, suman = 0;

    // Унос броја елемената низа
    printf(" Broj elemenata: ");
    scanf("%d", &n);

    // Унос елемената низа
    printf(" Elementi niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &niz[i]);

        // Провера да ли је елемент паран или непаран
        if (niz[i] % 2 == 0)
            sumap += niz[i]; // Додавање парног броја на суму парних
        else
            suman += niz[i]; // Додавање непарног броја на суму непарних
    }

    // Испис сума парних и непарних бројева
    printf(" Suma parnih = %d\n", sumap);
    printf(" Suma neparnih = %d\n", suman);

    getchar(); // Чека унос корисника пре завршетка
    return 0;  // Завршетак програма
}