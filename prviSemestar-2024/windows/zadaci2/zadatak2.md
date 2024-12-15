```c
#include <stdio.h>
#define MAX 100

main()
{
 	  int i, j, m, n, s = 0, nule = 0, mat[MAX][MAX];

 	  printf(" m = ");
 	  scanf("%d", &m);
 	  printf(" n = ");
 	  scanf("%d", &n);
 	  printf("\n Uneta matrica: \n");
 	  for (i = 0; i < m; i++)
 	  	  for (j = 0; j < n; j++)
			  scanf("%d", &mat[i][j]);
     for (i = 0; i < m; i++)
	 	 for (j = 0; j< n; j++)
	 	 {
		  	 if (mat[i][j] % 2 ==0) s += mat [i][j];
		  	 if (mat[i][j] == 0) nule++;
 	 	 }
 	 	 printf("\n Suma parnih elemenata: %d", s);
 	 	 printf("\n Broj elemenata jednakih nuli: %d", nule);

 	 	 getche();
 	 	 return 0;
}

```
