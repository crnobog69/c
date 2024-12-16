/*Zadatak 35*/

#include <stdio.h>
#include <math.h>

main()
{
      int i ,n;
      float x, c;
      printf("n= "); scanf("%d", &n);
      x = 1; c = 0;
      for(i=1; i<=n; i++)
      {
          c=sqrt(c+2);
          x=x*1/(float)c;
      }
      printf("\nx= %.5f\n", x);
      getche();
      return 0;
}
