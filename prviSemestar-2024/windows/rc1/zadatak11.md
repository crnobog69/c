```c
/*Zadatak 11*/

#include <stdio.h>

main()
{
      int a,b;
      printf("Unesite prvi broj: ");
      scanf("%d", &a);
      printf("Unesite drugi broj: ");
      scanf("%d", &b);
      printf("Zbir a+b je: %d\n", a+b);
      printf("Razlika a-b je: %d\n", a-b);
      printf("Proizvod a*b je: %d\n", a*b);
      printf("Celobrojni kolicnik a/b je: %d\n", a/b);
      printf("Realni kolicnik a/b je: %f\n", (float)a/(float)b);
      printf("Ostatak pri deljenju a/b je: %d\n", a%b);
      getche();
      return 0;
}

```
