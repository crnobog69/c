```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Unesite dimenziju matrice (n): ");
    scanf("%d", &n);

    // Alokacija memorije za matricu
    double **matrica = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++)
    {
        matrica[i] = (double *)malloc(n * sizeof(double));
    }

    // Unos elemenata matrice
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &matrica[i][j]);
        }
    }

    // Ispis matrice
    printf("Matrica:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%6.2f ", matrica[i][j]);
        }
        printf("\n");
    }

    // Računanje suma i proizvoda
    double suma_glavna_dijagonala = 0;
    double suma_ispod_glavne_dijagonale = 0;
    double proizvod_sporedna_dijagonala = 1;

    for (int i = 0; i < n; i++)
    {
        suma_glavna_dijagonala += matrica[i][i];
        proizvod_sporedna_dijagonala *= matrica[i][n - i - 1];
        for (int j = 0; j < i; j++)
        {
            suma_ispod_glavne_dijagonale += matrica[i][j];
        }
    }

    // Ispis rezultata
    printf("Suma elemenata na glavnoj dijagonali: %.2f\n", suma_glavna_dijagonala);
    printf("Suma elemenata ispod glavne dijagonale: %.2f\n", suma_ispod_glavne_dijagonale);
    printf("Proizvod elemenata na sporednoj dijagonali: %.2f\n", proizvod_sporedna_dijagonala);

    // Oslobađanje memorije
    for (int i = 0; i < n; i++)
    {
        free(matrica[i]);
    }
    free(matrica);

    return 0;
}
```