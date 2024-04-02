//  В данной строке найти количество цифр.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    strlen(str);
    fgets(str, 1000, stdin);
    int counter = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if ((int)str[i] >= 48 && (int)str[i] <= 57)
        {
            counter++;
        }
    }
    printf("%i", counter);
    return 0;
}