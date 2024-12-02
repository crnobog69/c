/*Zadatak131*/
#include <stdio.h>
#define MAX 100

main()
{
 	  int i, j, m, n, mat[MAX][MAX];
 	  printf(" Vrsta m = ");
 	  scanf("%d", &m);
 	  printf(" Kolona n = ");
 	  scanf("%d", &n);
 	  /*Citanje matrice sa tastature*/
 	  for(i = 0; j < m; i++)
 	  		for (j = 0; j < n; j++)
 	  		{
			 	printf(" element[%d][%d] = ", i, j);
			 	scanf("%d", &mat[i][j]);
	 	   	}
      /*Prikaz matrice*/
      printf("\n Uneta matrica: \n");
      for (i = 0; i < n; i++)
      {
	   	  for (j = 0; j < m; i++)
	   	  	  printf(" %d", mat[i][j]);
 	  	  printf("\n");
   	  }
   	  
   	  getche();
   	  return 0;
}
