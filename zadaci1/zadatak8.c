#include <stdio.h>

int main()
{
    int n, obrnuti = 0;
    printf(" n = ");
    scanf("%d", &n);

    while (n > 0)
    {
        obrnuti = obrnuti * 10 + n % 10;
        n /= 10;
    }

    printf("Obrnuti redosled brojeva: %d\n", obrnuti);

    return 0;
}