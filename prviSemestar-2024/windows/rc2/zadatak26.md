```c
/*Zadatak 26*/

#include <stdio.h>

main()
{
	double a1, b1, c1, a2, b2, c2, D, Dx, Dy, x, y;
	printf("Unesite koeficijente prve jedinice:\na1= "); scanf("%lf", &a1);
	printf("b1= "); scanf("%lf", &b1);
	printf("c1= "); scanf("%lf", &c1);
	printf("Unesite koeficijente druge jednacine:\na2= "); scanf("%lf", &a2);
	printf("b2= "); scanf("%lf", &b2);
	printf("c2= "); scanf("%lf", &c2);
	D  = a1 * b2 - a2 * b1;
	Dx = c1 * b2 - c2 * b1;
	Dy = a1 * c2 - a2 * c1;
	if (D != 0)
	{
		x = Dx / D;
		y = Dy / D;
		printf("\nResenje sistema:\nx= %.2f\n", x);
		printf("y= %.2f\n", y);
	}
	else
		if(Dx == 0 && Dy == 0)
			printf("Sistem ima beskonacno resenja.\n");
		else 
			printf("Sistem nema resenja.\n");
	getche();
	return 0;
}

```