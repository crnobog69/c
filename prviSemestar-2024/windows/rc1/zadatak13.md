```c
/*Zadatak 13*/

#include <stdio.h>
#include <math.h>

main()
{
      float a, b, m;
      printf("a= ");
      scanf("%f", &a);
      printf("b= ");
      scanf("%f", &b);
      m=sqrt(a*b+b*b);
      printf("Modul kompleksnog broj %.2f+%.2fi je %.2f", a, b, m);
      getche();
      return 0;
}

```
