```c
/*Zadatak 23*/

#include <stdio.h>

main()
{
	float x, y;
	printf("Unesite x= "); scanf("%f", &x);
	if ((x<=2) && (x>-2))
		y = 2 * x;
	else if ((x<7) && (x>=5))
		y = 3 * x - 1;
	else
		y = 1 / x;
	printf("\ny= %.2f", y);
	getche();
	return 0;
}

```