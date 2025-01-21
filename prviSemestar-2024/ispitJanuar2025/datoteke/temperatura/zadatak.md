```c
#include <stdio.h>

int main()
{

    FILE *prosecne;

    prosecne = fopen("prosecne.txt", "r");

    if (prosecne == NULL)
    {
        printf("\n Greska \n");
        return 1;
    }

    getchar();
    return 0;
}
```