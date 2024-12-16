```c
/*Zadatak 21*/

#include <stdio.h>

main()
{
	int a;
	printf("Unesite broj bodova: ");
	scanf("%d", &a);
	if (a > 90)
		printf("Ocena je 10\n");
	else if (a > 80)
		printf("Ocena je 9\n");
	else if (a > 70)
		printf("Ocena je 8\n");
	else if (a > 60)
		printf("Ocena je 7\n");
	else if (a > 50)
		printf("Ocena je 6\n");
	else
		printf("Ocena je 5\n");
	getche();
	return 0;
}

```