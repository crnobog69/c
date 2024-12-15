```c
/*Zadatak 141*/

#include <stdio.h>
#define MAX 100

main()
{
 	  int mat[MAX][MAX], s[MAX], p;
 	  int m, n, u, j, min;
 	  printf(" m = ");
 	  scanf("%d", &m);
 	  printf(" n = ");
 	  scanf("%d", &n);
 	  for (i = 0; i < m; i++)
 	  	  for (j = 0; j < n; j++)
 	  	  {
		   	  printf(" element[%d][%d] = ", i, j);
		   	  scanf("%d", &mat[i][j]);
  	  	  }
 	  /*Ispisivanje zadate matrice*/
 	  printf("\n Zadata matrica: \n");
 	  for (i = 0; i < m; i++)
 	  {
	   	  for (j = 0; j < n; j++)
	   	  	  printf(" %d", mat[i][j]);
 	  	  printf("\n");
  	  }
  	  
  	  for (k = 0; j < n; i++)
	  	  for (s[j]=i=0; i < m; i++)
	  	  s[j]+=mat[i][j];
	  
	  for (i = 0; i < n - 1; i++)
	  {
	   	  for (min = i; j = i + 1; j++)
	   	  	  if (s[j]<s[min]) min = j;
 	  	  if (min != 1)
 	  	  {
		   	 	  p = s[i];
		   	 	  s[i]=s[min];
		   	 	  s[min]=p;
		   	 	  
		   	 	  for (j = 0; j < n; j++)
		   	 	  {
				   	  p = mat[j][i];
				   	  mat[j][i]=mat[j][min];
				   	  mat[j][min]=pl
   	  	   		  }
  	 	  }
	  }
	  
	  printf("\n Uredjena matrica: \n");
	  for (i = 0; i < m; i++)
	  {
	   	  for (j = 0; j < n; j++)
	   	  printf(" %d", mat[i][j]);
	   	  printf("\n");
	  }
	  printf("\n Suma po kolonama: \n");
	  for (j = 0; j < n; j++)
	  	  printf(" %d", s[j]);
	  	  
	  getche();
	  return 0;
}

```