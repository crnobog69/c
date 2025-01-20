```c
/*Zadatak 73*/

#include <stdio.h>

main()
{
      int n, a, p = 1;
      printf(" n = ");
      scanf("%d", &n);
      poc: a = n % 10;
      p = p * a;
      n = n / 10;
      if (n != 0)
         goto poc;
      printf(" p = %d", p);
      getche();
      return 0;
}

```
