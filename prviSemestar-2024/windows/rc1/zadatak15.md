```c
/*Zadatak 15*/

#include <stdio.h>

main()
{
      long sec, d, h, m, s;
      printf("Unesite vreme u sekundama: ");
      scanf("%ld", &sec);
      s=sec%60;
      m=sec/60;
      h=m/60;
      m=m%60;
      d=h/24;
      h=h%24;
      printf("\n(d:h:m:s) %ld:%ld:%ld:%ld\n",d,h,m,s);
      getche();
      return 0;
}

```
