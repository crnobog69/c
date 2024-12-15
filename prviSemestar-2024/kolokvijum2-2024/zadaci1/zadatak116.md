```c
/*Zadatak 116*/

#include <stdio.h>
#define MAX 100

main()
{
 	  int nizA[MAX], nizB[MAX], nizC[MAX];
 	  int n, i, j = 0, k = 0;

 	  printf(" Broj elemenata niza A: ");
 	  scanf("%d", &n);
 	  printf(" Elementi niza A: ");
 	  for (i = 0; i < n; i++)
	  	  scanf("%d", &nizA[i]);
 	  for (i = 0; i < n; i++)
 	  {
	   	  if (nizA[i] < 0)
	   	  {
 	 		  nizB[j] = nizA[i];
 	 		  j++;
		  }
		  else
		  {
		   	  nizC[k] = nizA[i];
		   	  k++;
 	  	  }
  	  }
  	  printf("\n Elementi niza B: ");
  	  for (i = 0; i < j; i++)
  	  	  printf("%d ", nizB[i]);
  	  printf("\n Elementi niza C: ");
  	  for (i = 0; i < k; i++)
  	  	  printf("%d ", nizC[i]);

  	  getche();
  	  return 0;
}

```
