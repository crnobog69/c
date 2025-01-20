```c
// Саставити програм за израчунавање и исписивање суме квадрата свих бројева,
// само парних и само непарних за унете границе интервала.
// Користити функције за израчунавање збира квадрата.

#include <stdio.h>

int ZbirKv(int a, int b)
{
    int i, suma = 0;

    for (i = a; i <= b; i++)
        suma += i * i;

    return suma;
}

int ZbirKvP(int a, int b)
{
    int i, suma = 0;

    for (i = a; i <= b; i++)
    {
        if (i % 2 == 0)
            suma += i * i;
    }

    return suma;
}

int ZbirKvN(int a, int b)
{
    int i, suma = 0;

    for (i = a; i <= b; i++)
    {
        if (i % 2 == 1)
            suma += i * i;
    }

    return suma;
}

int main()
{
    int a, b;

    printf("Gornja granica: ");
    scanf("%d", &a);
    printf("Donja granica: ");
    scanf("%d", &b);

    printf("\n Zbir kvadrata svih brojeva: %d ", ZbirKv(a, b));
    printf("\n Zbir kvadrata parnih brojeva: %d ", ZbirKvP(a, b));
    printf("\n Zbir kvadrata neparnih brojeva: %d \n", ZbirKvN(a, b));

    getchar();
    return 0;
}
```
