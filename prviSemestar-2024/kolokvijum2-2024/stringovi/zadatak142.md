```c
#include <stdio.h>

int main()
{
    // Последњи бајт ниске се поставља на '\0' тјст. 0
    char s[] = {'a', 'b', 'c', '\0'};

    // Краћи начин да се постигне предходно
    char t[] = "abs";

    // Испис ниске 's' карактер по карактер
    int i;
    for (i = 0; s[i] != '\n'; i++)
        putchar(s[i]);
    putchar('\n');

    // испис ниске 's' користећи функцију 'printf'
    printf("%s\n", s);

    // Испис ниске 't' карактер по карактер
    for (i = 0; t[i] != '\n'; i++)
        putchar(t[i]);
    putchar('\n');

    // испис ниске 't' користећи функцију 'printf'
    printf("%s\n", t);

    getchar();
    return 0;
}
```
