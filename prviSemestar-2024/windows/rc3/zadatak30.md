```c
/*Zadatak 30*/

#include <stdio.h>

main()
{
      int i, j;
      for (i=1; i<3; i++)
          for (j=1; j<4; j++)
              printf("i=%d, j=%d\n", i, j);
      printf("\n");
      for (i=1; i<4; i++)
          for (j=1; j<3; j++)
              printf("i=%d, j=%d\n", i, j);
      getche();
      return 0;
}

```