/*Zadatak 85*/

#include <stdio.h>

main()
{
      int c, razmak = 0, n = 0;
      while((c = getchar()) != EOF)
      switch(c)
      {
              case ' ':
                   razmak++;
                   break;
              case '.':
              case ',':
              case ';':
              case ':':
                   n++;
                   break;
              default:
                   break;       
      }
      printf("\nRazmaci: %d", razmak);
      printf("\nOstali trazeni: %d", n);
         
      getche();
      return 0;
}
