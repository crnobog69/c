// Саставити програм који ће учитати низ од n елемената и исписати их оним редоследом којим су учитани.

#include <stdio.h>
#define MAX 5 // Дефинишемо MAX као 5, што ће бити величина низа

int main()
{
    int niz[MAX], i, n;

    printf(" n = ");
    scanf("%d", &n);

    printf(" Unesite %d elemenata: ");
    for (i = 0; i < n; i++)
        scanf("%d", &niz[i]);

    printf("\n Unesti niz: ");
    for (i = 0; i < n; i++)
        printf(" %d", niz[i]);

    getchar();
    return 0;
}