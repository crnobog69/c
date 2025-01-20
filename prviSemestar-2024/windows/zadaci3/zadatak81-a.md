```c
/*Zadatak 81-a*/

#include <stdio.h>

main()
{
      int c, n =0;
      c = getche();
      while(c != '.')
      {
              c = getche();
              n++;
      }
      printf("\n Broj karaktera je %d.\n", n);

      getche();
      return 0;
}

```
