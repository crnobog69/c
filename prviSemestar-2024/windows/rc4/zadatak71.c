/*Zadatak 71*/

#include <stdio.h>

main()
{
      int n, i;
      float s;
      while (i)
      {
            printf("\n n = ");
            scanf("%d", &n);
            if(n == 0) break;
            if(n < 0 ) continue;
            s = 0;
            for(i = 1; i <= n; i++)
                  s += 1./(i*i);
            printf(" s = %.6f\n", s);
      }
      getche();
      return 0;
}
