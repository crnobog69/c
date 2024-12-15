```c
/*Zadatak 111*/

#include <stdio.h>
#define MAX 100

main()
{
 	  int i, n, k = 0, niz[MAX];
 	  double suma = 0;
 	  
 	  printf(" Broj elemenata: ");
 	  scanf("%d", &n);
 	  printf(" Elementi niza: ");
 	  for (i = 0; i < n; i++)
 	  {
	   	  scanf("%d", &niz[i]);
	   	  if (niz[i]%3 == 0)
	   	  {
	 		   suma += niz[i];
	   		   k++;
 		  }
  	  }
  	  
  	  printf(" SRV = %.3f\n", suma/k);
  	  
  	  getche();
  	  return 0;
}

```