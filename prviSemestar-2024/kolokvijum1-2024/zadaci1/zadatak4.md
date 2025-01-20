```c
#include <stdio.h>

int main()
{
    int a, b;

    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);

    if (a == b)
        printf("'a' i 'b' su jednaki.\n");
    else if (a > b)
        printf("'a' je veci od 'b'.\n");
    else if (a < b)
        printf("'a' je manje od 'b'.\n");

    return 0;
}
```
