```c
#include <stdio.h>

int main()
{
    int mesec, godina, BrDana;
    printf(" Unesite godinu: ");
    scanf("%d", &godina);
    printf(" Unesite redni broj meseca u godini: ");
    scanf("%d", &mesec);

    switch (mesec)
    {
    case 1:
    case 3:
    case 5:
    case 8:
    case 10:
    case 12:
        BrDana = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        BrDana = 30;
        break;
    case 2:
        BrDana = 28 + ((godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0);
        break;
    default:
        BrDana = 0;
        break;
    }
    if (BrDana != 0)
        printf(" Mesec ima %d dana.\n", BrDana);

    return 0;
}
```