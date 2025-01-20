```c
#include <stdio.h>

int main()
{
    int x = 5;
    /* Адресу променљиве 'x' запамтићем у новој променљивој.
       Нова променљива је типа показивача на int (int*) */
    int *pX;
    printf(" Adresa promenljive x: %p\n", &x);
    printf(" Vrednost promenljive x: %d\n", x);

    pX = &x;

    printf(" Vrednost promenljive pX (tj. pX): %p\n", pX);
    printf(" Vrednost promenljive na koju ukazuje pX (tj. *pX): %d\n", *pX);
    /* Мењамо вредност променљиве на коју указује 'pX' */
    *pX = 6;
    printf(" Vrednost promenljive na koju pokazuje pX (tj. *pX): %d\n", *pX);
    /* Пошто 'pX' садржи адресу променљиве 'x', она указује на 'x'
       тако да је посредно променљива и вредност променљиве 'x' */
    printf(" Vrednost promenqive x: %d\n", x);

    getchar();
    return 0;
}
```