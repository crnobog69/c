```c
/*Zadatak 81-b*/

#include <stdio.h>

main()
{
      int c, nk = 0, nr = 0, nb = 0, ns = 0;
      while((c = getchar()) != EOF)
      {
               if ((c ==' ') || (c =='\n') || (c == '\n')) nr++;
               if (c >= '0' && c <= '9') nb++;
               if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ns++;
               nk++;
      }
      printf(" Razmaci: %d\n", nr);
      printf(" Cifre: %d\n", nb);
      printf(" Slova: %d\n", ns);
      printf(" Ukupno: %d\n", nk);
      
      getche();
      return 0;
}

```