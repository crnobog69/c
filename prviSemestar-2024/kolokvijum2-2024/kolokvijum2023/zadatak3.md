```c
// 3. Zadatak: Učitavanje matrice n×nn×n, ispis i računanje proizvoda elemenata na glavnoj dijagonali

#include <stdio.h>

int main()
{
    int dimenzija;
    printf("Unesite dimenziju matrice (n): ");
    scanf("%d", &dimenzija);

    int matrica[dimenzija][dimenzija];
    long long proizvod = 1;

    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < dimenzija; i++)
    {
        for (int j = 0; j < dimenzija; j++)
        {
            scanf("%d", &matrica[i][j]);
            if (i == j)
            {
                proizvod *= matrica[i][j];
            }
        }
    }

    printf("Matrica:\n");
    for (int i = 0; i < dimenzija; i++)
    {
        for (int j = 0; j < dimenzija; j++)
        {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    printf("Proizvod elemenata na glavnoj dijagonali: %lld\n", proizvod);

    return 0;
}

```