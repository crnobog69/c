```c
#include <stdio.h>

int main()
{
    int a;

    printf("Unesite broj: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("Broj je paran");
    else
        printf("Broj je neparan");

    return 0;
}
```