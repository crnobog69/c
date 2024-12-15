```c
#include <stdio.h>

int main()
{
    char x, y, z;

    printf("Unesite 3 slova(sa razmacima izmedju slova): ");
    scanf("%c %c %c", &x, &y, &z);

    printf("Promenljive\tASCII\n");
    printf("%c\t\t %d\n", x, x);
    printf("%c\t\t %d\n", y, y);
    printf("%c\t\t %d\n", z, z);

    return 0;
}
```