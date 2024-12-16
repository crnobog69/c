/*Zadatak 69-b*/

#include <stdio.h>

main()
{
      int i, j;
      for (i = 1; i <= 4; i++)
          for (j = 1; j <=4; j++)
          {
              if (j == 2) continue;
              printf(" i = %d j = %d \n", i, j);
          }
          getche();
          return 0;
}
