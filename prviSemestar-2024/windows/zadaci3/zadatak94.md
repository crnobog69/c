```c
/*Zadatak 94*/

#include <stdio.h>

int max(int a, int b)
{
    if (a >= b) return a;
    else return b;
}

main()
{
      int a, b, c, d, m;
      printf("Unesite cetiri broja:\n");
      scanf("%d %d %d %d", &a, &b, &c, &d);
      m=max(max(a, b), max(c, d));
      if (m == 0) printf("Zadati brojevi su isti.");
      else printf("\nMaximum= %d\n", m);
      
      getche();
      return 0;
}

```