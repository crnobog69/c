```c
/*Zadatak 100*/

#include <stdio.h>

int Prost (int broj)
{
    int i;
    for (i = 2; i < broj; i++)
    if (broj % i == 0)
       return 0;
    return 1;
}

main()
{
      int i;
      for (i = 1; i <= 500; i++)
          if (Prost(i) == 1)
             printf("%d\t", i);
      
      getche();
      return 0;
}

```