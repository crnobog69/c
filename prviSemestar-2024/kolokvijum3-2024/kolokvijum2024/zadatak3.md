```c
#include <stdio.h>

// Дефинисање структуре за студента
struct Student
{
    char ime[50];
    int godina;
    float prosecna_ocena;
};

int main()
{
    // Декларација и иницијализација структуре
    struct Student student1;

    // Унос података за студента
    printf("Унесите име студента: ");
    scanf("%s", student1.ime);

    printf("Унесите годину студија: ");
    scanf("%d", &student1.godina);

    printf("Унесите просечну оцену: ");
    scanf("%f", &student1.prosecna_ocena);

    // Испис података о студенту
    printf("\nПодаци о студенту:\n");
    printf("Име: %s\n", student1.ime);
    printf("Година студија: %d\n", student1.godina);
    printf("Просечна оцена: %.2f\n", student1.prosecna_ocena);

    getchar();
    return 0;
}

```