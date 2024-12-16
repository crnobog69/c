/*Zadatak 31*/

#include <stdio.h>

main()
{
      int n, i;
      float a, s, ars;
      s = 0;
      printf("n= ");
      scanf("%d", &n);
      printf("Unesite %d brojeva:\n", n);
      for (i = 1; i <= n; i++)
      {
          scanf("%f", &a);
          s += a;
      }
      ars = s / n;
      printf("\n Sume zadatih brojeva je %.2f", s);
      printf("\n Aritmeticka sredina zadatih brojeva je %.2f", ars);
      getche();
      return 0;
}
