/*Zadatak 6*/

#include <stdio.h>

main()
{
      double a;
      printf("Unesite jedan realan broj: ");
      scanf("%lf", &a);
      printf("\nOblik sa decimalnom tackom: %f", a);
      printf("\nOblik sa eksponentom: %e", a);
      printf("\nU naucnoj notaciji: %g", a);
      getche();
      return 0;
}
