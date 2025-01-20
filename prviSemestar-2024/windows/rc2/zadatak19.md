```c
/*Zadatak 19-1*/

#include <stdio.h>

main()
{
	int broj;
	printf("Unesite broj: ");
	scanf("%d", &broj);
	if (broj%2 == 0 )
		printf("\nUneti broj je paran.\n");
	else
		printf("\nUneti broj je neparan.\n");
	getche();
	return 0;
}

```