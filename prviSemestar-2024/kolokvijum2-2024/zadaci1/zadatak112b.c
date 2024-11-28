/*Zadatak 112b*/

#include <stdio.h>
#define MAX 100

main()
{
 	  int i, n, niz[MAX], sumap = 0, suman = 0;
 	  
 	  printf(" Broj elemenata: ");
 	  scanf("%d", &n);
 	  printf(" Elementi niza: ");
 	  for (i = 0; i < n; i++)
 	  {
	   	  scanf("%d", &niz[i]);
	   	  if (i % 2 == 0)
   	   	  	 sumap += niz[i];
   	      else
 	  	     suman += niz[i];
  	  }
  	  printf(" Suma parnih = %d\n", sumap);
  	  printf(" Suma neparnih = %d\n", suman);
  	  
  	  getche();
  	  return 0;
}
