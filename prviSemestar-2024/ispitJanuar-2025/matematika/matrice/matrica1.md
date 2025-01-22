```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Unesite dimenziju matrice (n): ");
    scanf("%d", &n);

    // Динамичка алокација меморије за матрицу
    // 1. Прво алоцирамо низ показивача (редови матрице)
    double **matrica = (double **)malloc(n * sizeof(double *));
    // 2. За сваки ред алоцирамо меморију за његове елементе (колоне)
    for (int i = 0; i < n; i++)
    {
        matrica[i] = (double *)malloc(n * sizeof(double));
    }

    // Унос елемената матрице (читамо ред по ред)
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < n; i++) // i је индекс реда
    {
        for (int j = 0; j < n; j++) // j је индекс колоне
        {
            scanf("%lf", &matrica[i][j]);
        }
    }

    // Испис матрице у лепшем формату (6 места, 2 децимале)
    printf("Matrica:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%6.2f ", matrica[i][j]); // Поравнато десно, 6 места укупно
        }
        printf("\n"); // Нови ред након сваке врсте
    }

    // Иницијализација променљивих за рачунање
    double suma_glavna_dijagonala = 0;       // Елементи где је i == j
    double suma_ispod_glavne_dijagonale = 0; // Елементи где је i > j
    double proizvod_sporedna_dijagonala = 1; // Елементи где је i + j == n - 1

    // Рачунање сума и производа у једном пролазу кроз матрицу
    for (int i = 0; i < n; i++)
    {
        suma_glavna_dijagonala += matrica[i][i];               // Главни дијагонални елемент
        proizvod_sporedna_dijagonala *= matrica[i][n - i - 1]; // Елемент на споредној дијагонали

        // Сума елемената испод главне дијагонале (j иде само до i)
        for (int j = 0; j < i; j++)
        {
            suma_ispod_glavne_dijagonale += matrica[i][j];
        }
    }

    // Испис резултата
    printf("Suma elemenata na glavnoj dijagonali: %.2f\n", suma_glavna_dijagonala);
    printf("Suma elemenata ispod glavne dijagonale: %.2f\n", suma_ispod_glavne_dijagonale);
    printf("Proizvod elemenata na sporednoj dijagonali: %.2f\n", proizvod_sporedna_dijagonala);

    // Ослобађање динамички алоциране меморије
    // 1. Прво ослобађамо меморију за сваки ред
    for (int i = 0; i < n; i++)
    {
        free(matrica[i]);
    }
    // 2. На крају ослобађамо меморију за низ показивача
    free(matrica);

    getchar();
    return 0;
}
```