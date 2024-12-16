```c
/*Zadatak 70*/

#include <stdio.h>

main()
{
      int i;
      for (i = 1; i <= 20; i++)
      {
          if (i % 3 == 0) continue;
          printf(" %d\n", i);
      }
      getche();
      return 0;
}

```