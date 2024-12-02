/*Zadatak 134*/

#include <stdio.h>
#define MAX 100

main()
{
 	  int i, j, n, sgd = 0, ssd = 0, mat[MAX][MAX];
 	  printf(" n = ");
 	  scanf("%d", &n);
 	  printf(" Elementi: \n");
 	  for (i = 0; i < n; i++)
 	  	  for (j = 0; j < n; j++)
 	  	  {
		   	  printf(" elementi[%d][%d] = ", i, j);
		   	  scanf("%d", &mat[i][j]);
  	  	  }
 	  printf("\n Uneta matrica: \n");
 	  for (i = 0; i < n; i++)
 	  {
	   	  for (j = 0; j < n; j++)
	   	  printf(" %d", mat[i][j]);
	   	  printf("\n");
	  }
	  printf("\n Elementi glavne dijagonale");
	  for (i = 0; i < n; i++)
	  {
	   	  printf("%d ", mat[i][j]);
	   	  sgd += mat[i][j];
	  }
	  printf("\n Suma glavne dijagonale = %d", sgd);
	  printf("\n Elementi sporedne dijgnale: ");
	  for (i = 0; i < n; i++)
	  {
	   	  printf("%d ", mat[i][n-i-1]);
	   	  ssd += mat[i][n-i-1];
	  }
	  printf("\n Suma sporedne dojagonale = %d", ssd);
	  getche();
	  return 0;
}
