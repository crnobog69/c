```c
#include <stdio.h>

int main()
{
    int a;

    printf("Unesite broj od 1 do 7: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("\n Ponedeljak\n");
        break;
    case 2:
        printf("\n Utorak\n");
        break;
    case 3:
        printf("\n Sreda\n");
        break;
    case 4:
        printf("\n Cetvrtak\n");
        break;
    case 5:
        printf("\n Petak\n");
        break;
    case 6:
        printf("\n Subota\n");
        break;
    case 7:
        printf("\n Nedelja\n");
        break;
    default:
        printf("\n GRESKA \n");
    }

    return 0;
}
```