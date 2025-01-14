#include <stdio.h>

int main()
{
    int broj = 10;  // Обична променљива
    int *pokazivac; // Декларација показивача на цео број

    pokazivac = &broj; // Додељивање адресе променљиве 'broj' показивачу

    // Испис вредности и адресе
    printf("Вредност променљиве 'broj': %d\n", broj);
    printf("Адреса променљиве 'broj': %p\n", &broj);
    printf("Вредност показивача (адреса): %p\n", pokazivac);
    printf("Вредност на коју показује показивач: %d\n", *pokazivac);

    // Промена вредности преко показивача
    *pokazivac = 20;
    printf("Нова вредност променљиве 'broj' после промене преко показивача: %d\n", broj);

    getchar();
    return 0;
}
