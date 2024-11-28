#include <stdio.h>
#define PI 3.141952

int main()
{
	double r, h, p, v;
	
	printf("Unesite poluprecnik: "); scanf("%lf", &r);
	printf("Unesite visinu: "); scanf("%lf", &h);
	
	p = 2*r*PI*(r+h);
	
	v = r * r * PI * h;
		
	printf("\tPovrsina je: %.4f\n", p);
	
	printf("\tZapremina je: %.4f\n", v);

	return 0;
}