```c
#include <stdio.h>  // За стандардни улаз/излаз (printf, scanf)
#include <stdlib.h> // За динамичку алокацију меморије (malloc, free)
#include <math.h>   // За математичке функције (sqrt, fabs)

int main()
{
    int m, n; // Број врста (m) и колона (n) матрице

    // Унос димензија матрице
    printf("Унесите број врста (m) и колона (n): ");
    scanf("%d %d", &m, &n);

    // Провера валидности димензија
    if (m <= 0 || n <= 0)
    {
        printf("Дименизије морају бити позитивне!\n");
        return 1; // Завршава програм са грешком
    }

    // ДИНАМИЧКА АЛОКАЦИЈА МАТРИЦЕ
    // Корак 1: Алоцирамо низ показивача на редове (врсте)
    double **matrica = (double **)malloc(m * sizeof(double *));

    // Корак 2: За сваку врсту алоцирамо меморију за колоне
    for (int i = 0; i < m; i++)
    {
        matrica[i] = (double *)malloc(n * sizeof(double));
    }

    // УНОС ЕЛЕМЕНАТА МАТРИЦЕ
    printf("Унесите елементе матрице:\n");
    for (int i = 0; i < m; i++)
    { // Итерација кроз врсте
        for (int j = 0; j < n; j++)
        {                                 // Итерација кроз колоне
            scanf("%lf", &matrica[i][j]); // Унос елемента [i][j]
        }
    }

    // ИСПИС МАТРИЦЕ
    printf("\nМатрица:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%8.2lf ", matrica[i][j]); // Форматиран испис
        }
        printf("\n"); // Нови ред након сваке врсте
    }

    // ИЗРАЧУНАВАЊЕ ТРАГА МАТРИЦЕ (СУМА ГЛАВНЕ ДИЈАГОНАЛЕ)
    double trag = 0.0;
    int min_dim = (m < n) ? m : n; // Дужина дијагонале (мања од m и n)
    for (int i = 0; i < min_dim; i++)
    {
        trag += matrica[i][i]; // Сабирамо елементе где је i == j
    }
    printf("\nТраг матрице: %.2lf\n", trag);

    // ЕУКЛИДСКА НОРМА (КОРЕН СУМЕ КВАДРАТА СВИХ ЕЛЕМЕНАТА)
    double euklidska_norma = 0.0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            euklidska_norma += matrica[i][j] * matrica[i][j]; // Квадрат елемента
        }
    }
    euklidska_norma = sqrt(euklidska_norma); // Квадратни корен суме
    printf("Еуклидска норма матрице: %.2lf\n", euklidska_norma);

    // ГОРЊА ВАНДИЈАГОНАЛНА НОРМА (СУМА АПСОЛУТНИХ ВРЕДНОСТИ ИЗНАД ГЛАВНЕ ДИЈАГОНАЛЕ)
    double gornja_norma = 0.0;
    for (int i = 0; i < m; i++)
    { // Итерација кроз врсте
        for (int j = i + 1; j < n; j++)
        {                                        // Итерација кроз колоне ИЗНАД дијагонале (j > i)
            gornja_norma += fabs(matrica[i][j]); // Апсолутна вредност
        }
    }
    printf("Горња вандијагонална норма: %.2lf\n", gornja_norma);

    // ОСЛОБАЂАЊЕ ДИНАМИЧКИ АЛОЦИРАНЕ МЕМОРИЈЕ
    // Прво ослобађамо колоне за сваку врсту
    for (int i = 0; i < m; i++)
    {
        free(matrica[i]);
    }
    // Затим ослобађамо низ врста
    free(matrica);

    getchar();
    return 0; // Успешан крај програма
}
```