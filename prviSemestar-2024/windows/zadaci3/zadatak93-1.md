```c
/*Zadatak 93-1*/

#include <stdio.h>

/*Deklaracja i definicija funkcije*/
int zbir(int a, int b)
{
    int rezultat;
    rezultat = a + b;

    return rezultat;
}

main()
{
      int c;
      c = zbir(5, 3); /*Poziv funkcije*/
      printf("\n%d\n", c);

      getche();
      return 0;
}

```
