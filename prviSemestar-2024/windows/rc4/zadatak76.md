```c
/*Zadatak 76*/

#include <stdio.h>

main()
{
      float op1, op2;
      char op;
      printf(" Operator: ");
      scanf("%c", &op);
      printf(" Operand 1: ");
      scanf("%f", op1);
      printf(" Operand 2: ");
      scanf("%f", op2);
      switch(op)
      {
                case '+':
                     printf("Vrednost: %.2f\n", op1 + op2);
                     break;
                case '-':
                     printf("Vrednost: %.2f\n", op1 - op2);
                     break;
                case '*':
                     printf("Vrednost: %.2f\n", op1 * op2);
                     break;
                case '/':
                     if (op2 == 0)
                         printf("Greska! Deljenje nulom!\n");
                     else
                         printf("Rezultat: %.2f\n", op1 / op2);
                         break;
                default:
                        printf(" Greska! Pogresan operator!\n");
      }
      getche();
      return 0;
}

```