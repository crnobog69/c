```c
/*Zadatak 12*/

#include <stdio.h>
#define PI 3.141952

main()
{
      double p,r,h,v;
      printf("Unesite visinu valjka: ");
      scanf("%lf", &h);
      printf("Unesite poluprecnik valjka: ");
      scanf("%lf",&r);
      p = 2*r*PI*(r+h);
      v = r*r*PI*h;
      printf("Povrsina valjka: %.4f\n", p);
      printf("Zapremina valjka: %.4f\n", v);
      getche();
      return 0;
}

```
