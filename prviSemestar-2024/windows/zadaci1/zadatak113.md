```c
/*Zadatak 113*/

#include <stdio.h>
#define MAX 100

main()
{
 	  int i, n, m, nizA[MAX], nizB[MAX], nizC[2*MAX];

 	  printf(" Broj elemenata niza A: ");
 	  scanf("%d", &n);
 	  printf(" Elementi niza A: ");
 	  for (i = 0; i < n; i++)
 	  	  scanf("%d", &nizA[i]);

 	  printf(" Broj elemenata niza B: ");
 	  scanf("%d", &m);
 	  printf(" Elementi niza B: ");
 	  for (i = 0; i < m; i++)
 	  	  scanf("%d", &nizB[i]);

 	  printf(" Elementi niza C: ");
 	  for (i = 0; i < (n + m); i++)
 	  {
	   	  if (i < n) nizC[i] = nizA[i];
	   	  else nizC[i] = nizB[i - n];
	   	  printf(" %d", nizC[i]);
  	  }

  	  getche();
  	  return 0;
}

```
