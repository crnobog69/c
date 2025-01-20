```c
/*Zadata 133*/

#include <stdio.h>
#define MAX 100

main()
{
 	  int i, j, n, m, a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
 	  printf(" m = ");
 	  scanf("%d", &m);
 	  printf(" n = ");
 	  scanf("%d", &n);

 	  printf("\n Elementi prve matrice: \n");
 	  for (i = 0; i < m; i++)
 	  	  for (j = 0; j < n; j++)
 	  	  	  scanf("%d", &a[i][j]);
 	  printf("\n Elementi druge matrice: \n");
 	  for (i = 0; i < m; i++)
 	  	  for (j = 0; j < n; j++)
 	  	  scanf("%d", &b[i][j]);

	  printf("\n Zbir dve matrice:\n");
	  for (i = 0; i < m; i++)
	  {
	   	  for (j = 0; j < n; j++)
	   	  {
		   	  c[i][j] = a[i][j] + b[i][j];
		   	  printf(" %d", c[i][j]);
  	  	  }
  	  	  printf("\n");
   	  }

   	  getche();
   	  return 0;
}

```
