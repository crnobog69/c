#include <stdio.h>
#define MAX 100 // Максимална величина матрице

int main()
{
    int i, j, m, n, s = 0, nule = 0, mat[MAX][MAX]; // Декларација променљивих

    // Учитавање броја редова и колона
    printf(" m = ");
    scanf("%d", &m);
    printf(" n = ");
    scanf("%d", &n);

    // Учитавање елемената матрице са валидацијом
    printf("\n Uneta matrica: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            do
            {
                printf(" Unesite element [%d][%d] (1-8): ", i, j);
                scanf("%d", &mat[i][j]);

                // Провера да ли је број у опсегу 1-8
                if (mat[i][j] < 1 || mat[i][j] > 8)
                    printf(" Greska! Broj mora biti u opsegu 1-8.\n");

            } while (mat[i][j] < 1 || mat[i][j] > 8); // Понављање ако број није у опсегу
        }

    // Пролазак кроз матрицу и обрада елемената
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] % 2 == 0) // Провера да ли је елемент паран
                s += mat[i][j];     // Сабирање парних елемената
            if (mat[i][j] == 0)     // Провера да ли је елемент једнак нули
                nule++;             // Увећање бројача нула
        }

    // Испис резултата
    printf("\n Suma parnih elemenata: %d", s);
    printf("\n Broj elemenata jednakih nuli: %d", nule);

    getchar(); // Чека унос корисника пре завршетка
    return 0;  // Завршетак програма
}
