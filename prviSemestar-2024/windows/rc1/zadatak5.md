```c
/*Zadatak 5*/

/*Sastaviti program koji omogucuje unos celog bro sa tastature i njegov prikaz u decmalnom, oktalnom i heksadecimalnom obliku*/

#include <stdio.h>

main()
{
      int a;
      printf("Unesite ceo broj: ");
      scanf("%d", &a);
      printf("\nDecimalno oblik: %d", a);
      printf("\nOktalni oblik: %o", a);
      printf("\nHeksadecimalni oblik: %x", a);
      getche();
      return 0;
}

```