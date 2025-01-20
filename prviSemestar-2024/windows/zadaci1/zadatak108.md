```c
/*Zadatak 108*/

#include <stdio.h>
#define MAX 100

main()
{
 	  int niz[MAX], i, n;

 	  printf(" n = ");
 	  scanf("%d", &n);
 	  printf("Unesite %d elemenata: ", n);

 	  for (i = 0; i < n; i++)
 	  	  scanf("%d", &niz[i]);

 	  printf("\n Uneti niz: ");

 	  for (i = 0; i < n; i++)
 	  	  printf(" %d", niz[i]);

 	  getche();
 	  return 0;
}

```
