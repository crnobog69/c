```c
#include <stdio.h>

int main()
{
    int a;

    printf("Unesite broj: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("Broj je paran\n");
    else
        printf("Broj je neparan\n");

    return 0;
}
```