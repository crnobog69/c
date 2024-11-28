#include <stdio.h>

int main()
{
	char a, b ,c;
	
	printf("Unesite tri znaka: ");
	scanf("%c %c %c", &a, &b, &c);
	
	printf("Promenljiva\t ASCII vrednost\n");
	printf("\n%c\t\t %d\n", a, a);
	printf("\n%c\t\t %d\n", b, b);	
	printf("\n%c\t\t %d\n", c, c);
	
	return 0;
}