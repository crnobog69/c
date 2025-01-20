```c
/*Zadatak 135*/

#include <stdio.h>
#define MAX 100

main()
{
 	  int i, j, n, s = 0, mat[MAX][MAX];
 	  printf(" n = ");
 	  scanf("%d", &n);
 	  for (i = 0; i < n; i++)
	  	  for (j = 0; j < n; j++)
	  	  {
		   	  printf(" element[%d][%d] = ", i, j);
		   	  scanf("%d", &mat[i][j]);
 	  	  }
 	  printf("\n Uneta matrica: \n");
 	  for (i = 0; i < n; i++)
 	  {
	   	  for (j = 0; j < n; j++)
	   	  	  printf(" %d", mat[i][j]);
 	  	  printf("\n");
  	  }
  	  printf("\n Suma elemenata vrste:\n");
  	  for (i = 0; i < n; i++)
  	  {
	   	  for (j = 0; j < n; j++)
	   	  	  s += mat[i][j];
 	  	  printf(" %d", s);
 	  	  s = 0;
  	  }
  	  getche();
  	  return 0;
}

```
