#include <stdio.h>

int main()
{
    int a = 3, b = 3;
    printf("\n a b \n");
    printf("\n %d %d\n", a--, --b);
    printf("\n %d% d\n", a--, --b);
    printf("\n %d% d\n\n", a--, --b);

    return 0;
}