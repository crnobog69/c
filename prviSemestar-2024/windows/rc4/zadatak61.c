/*Zadatak 61*/

#include <stdio.h>
#include <math.h>

main()
{
      int znak=-1, i = 1;
      float clan=1.0, suma=1.0, eps;
      printf(" eps= ");
      scanf("%f", &eps);
      do
      {
                  clan = (float) znak / (2 * i + 1);
                  suma += clan;
                  znak =- znak;
                  i ++;
      }
      while (fabs (clan) > eps);
      printf("\n Pi= %f", 4 * suma);
      getche();
      return 0;
}
