```c
#include <stdio.h>

int main()
{
    int a, b;

    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);

    if (a > b)
        printf("'a' je vece od 'b'");
    else if (a == b)
        printf("'a' i 'b' imaju istu vrednost");
    else if (a < b)
        printf("'a' je manje od 'b'");

    return 0;
}
```