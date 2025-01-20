```c
// 4. Zadatak: Brojanje koliko se puta slovo 'B' pojavljuje u stringu

#include <stdio.h>
#include <string.h>

int main()
{
    char niz[100];  // Декларисање низа који ће чувати унети текст
    int brojac = 0; // Променљива која броји колико пута се појављује слово 'B' или 'b'
    int i;          // Променљива за индекс у петљи

    // Исписујемо поруку да корисник унесе текст
    printf("Unesite string: ");

    // Унос текста са клавијатуре
    fgets(niz, sizeof(niz), stdin);

    // Петља која пролази кроз сваки знак у низу
    for (i = 0; i < strlen(niz); i++)
    {
        // Ако је тренутни знак 'B' или 'b', увећавамо бројач
        if (niz[i] == 'B' || niz[i] == 'b')
        {
            brojac++; // Увећавамо бројач
        }
    }

    // Исписујемо број појава слова 'B' или 'b'
    printf("Slovo 'B' se pojavljuje %d puta.\n", brojac);

    return 0; // Завршавамо програм
}

```
