```c
/*Zadatak 114*/

#include <stdio.h>
#define MAX 100

main()
{
 	  float nizA[MAX], nizB[MAX], nizC[MAX];
 	  int i, n;
 	  
 	  printf(" n = ");
 	  scanf("%d", &n);
 	  printf(" Elementi niza A: ");
 	  for (i = 0; i < n; i++)
 	  	  scanf("%f", &nizA[i]);
 	  printf(" Elementi niza B: ");
 	  for (i = 0; i < n; i++)
 	  	  scanf("%f", &nizB[i]);
 	  printf("\n Elementi niza C: ");
 	  for(i = 0; i < n; i++)
 	  {
	   		nizC[i] = pow(nizA[i],3)/3+2*nizA[i]*nizB[i];
	   		printf("%.2f ", nizC[i]);
	  }
	  
	  getche();
	  return 0;
}

```