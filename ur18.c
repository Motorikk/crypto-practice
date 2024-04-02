#include <stdio.h>
#include <string.h>

// Дана строка. Вывести первый, последний и средний (если он есть) символы.
int main()
{
   char str[100];
    printf("Введіть рядок: ");
    fgets(str, sizeof(str), stdin);
    
    int length = strlen(str);
    
    if (length > 0) {
        printf("Перший символ: %c\n", str[0]);
        printf("Останній символ: %c\n", str[length - 2]);
        if (length % 2 == 1) {
            printf("Середній символ: %c\n", str[length /2]);
        } 
    }
    return 0;

} 