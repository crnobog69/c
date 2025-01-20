```c
/*Zadatak 65-b*/

#include <stdio.h>

main()
{
      int i, j;
      for (i = 1; i <= 5; i++)
          for (j = 1; j <=10; j++)
          {
              if (j == 3) break;
              printf(" i = %d j = %d \n", i, j);
          }
          getche();
          return 0;
}

```