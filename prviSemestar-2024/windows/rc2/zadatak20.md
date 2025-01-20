```c
/*Zadatak 20-1*/

#include <stdio.h>

main()
{
	int a, b;
	printf("Unesite broj a= ");
	scanf("%d", &a);
	printf("Unesite broj b= ");
	scanf("%d", &b);
	if (a == b)
		printf("Brojevi su jednaki.\n");
	else if (a > b)
		printf("Broj a je veci od b.\n");
	else
		printf("Broj a je manji od b.\n");
	getche();
	return 0;
}

```
