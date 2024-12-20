// Саставити програм који учита матрицу целих бројева димензије mхn,
// а затим врши сабирање елемената који су парни бројеви.
// На крају исписати суму парних бројева и број елемената који су једнаки нули.

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

    // Учитавање елемената матрице
    printf("\n Uneta matrica: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)      // Исправка грешке у услову (ј < n)
            scanf("%d", &mat[i][j]); // Учитавање једног елемента

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
    printf("\n Suma parnih elemenata: %d\n", s);
    printf("\n Broj elemenata jednakih nuli: %d\n", nule);

    getchar(); // Чека унос корисника пре завршетка
    return 0;  // Завршетак програма
}
