```c
/*Zadatak 118*/

#include <stdio.h>
#define MAX 100

double SkalPro(double a[], double b[], int n)
{
 	   double zbir = 0;
 	   int i;
 	   for (i = 0; i < n; i++)
 	   	   zbir += a[i]*b[i];
 	   return zbir;
}

main()
{
 	  double nizA[MAX], nizB[MAX];
 	  int i, n;

 	  printf(" Broj elemenata niza: ");
 	  scanf("%d", &n);
 	  printf(" Elementi niza A: ");
 	  for (i = 0; i < n; i++)
 	  	  scanf("%lf", &nizA[i]);
 	  printf(" Elementi niza B: ");
 	  for (i = 0; i < n; i++)
 	  	  scanf("%lf", &nizB[i]);
 	  printf("\n A*B = %.2f", SkalPro(nizA, nizB, n));

 	  getche();
 	  return 0;
}

```
