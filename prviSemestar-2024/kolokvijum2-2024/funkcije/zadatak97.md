```c
// Саставити програм којим се исписују сви Нивенови бројеви друге стотице.
// Нивенов број је број који је дељив са сумом својих цифара.
// Формирати две функције, једна за рачунање суме цифара,
// а друга за одређивање да ли је дати број Нивенов (ако јесте враћа 1, ако није враћа 0).

#include <stdio.h>
#include <math.h>

int SumaCifara(int n)
{
    int suma = 0;
    for (; n > 0; n /= 10)
        suma += n % 10;

    return suma;
}

int Nivenov(int n)
{
    if (n % SumaCifara(n) == 0)
        return 1;

    return 0;
}

int main()
{
    int i;

    for (i = 101; i <= 200; i++)
        if (Nivenov(i))
            printf("%d\t", i);

    getchar();
    return 0;
}
```