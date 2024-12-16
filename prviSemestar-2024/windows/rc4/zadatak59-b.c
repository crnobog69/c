/*Zadatak 59-a*/

#include <stdio.h>

main()
{
      int i;
      i = 2;
      do
      {
          printf("%d\n", i);
          // ili
          // i+=2
          i=i+2;
      }
      while(i <= 10);
      
      getche();
      return 0;
}
