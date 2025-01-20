```c
// Саставити програм који исписује на екрану колико има редова и колико знакова у датотеци podaci6.txt.

#include <stdio.h>

int main()
{
    FILE *dato;

    long znak;
    int brZnak = 0, brRed = 1;

    dato = fopen("podaci6.txt", "r");

    if (dato == NULL)
    {
        printf("Greška prilikom otvaranja datoteke 'podaci6.txt' za čitanje!\n");
        return 1;
    }

    /* Функција 'fgetc' учитава из датотеке један карактер. */
    while ((znak = fgetc(dato)) != EOF)
    {
        if (znak == '\n')
        {
            brRed++;
        }
        brZnak++;
    }

    fclose(dato);

    printf("\n Broj znakova: %d\n", brZnak);
    printf("\n Broj redova: %d\n", brRed);

    getchar();
    return 0;
}

// ИЛИ ДРУГИ НАЧИН:
// // Саставити програм који исписује на екрану колико има редова и колико знакова у датотеци podaci6.txt.
//
// #include <stdio.h>
//
// int main()
// {
//     FILE *dato;
//
//     long znak;
//     int brZnak = 0, brRed = 1;
//
//     dato = fopen("podaci6.txt", "r");
//
//     if (dato == NULL)
//     {
//         printf("Greška prilikom otvaranja datoteke 'podaci6.txt' za čitanje!\n");
//         return 1;
//     }
//
//     // Функција 'fgetc' учитава из датотеке један карактер.
//     while (feof(dato) == 0)
//     {
//         if (fgetc(dato) == '\n')
//         {
//             brRed++;
//         }
//         brZnak++;
//     }
//
//     fclose(dato);
//
//     printf("\n Broj znakova: %d\n", brZnak);
//     printf("\n Broj redova: %d\n", brRed);
//
//     getchar();
//     return 0;
//     }
//
```
