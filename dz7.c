#include <stdio.h>

int main()
{
    // 1. Текст вводится через терминал. Нужно посчитать количество слов в тексте и вывсти результат на экран.
    char str[1000];
    int counter = 0;
    int firstSymbol = 0;
 
    fgets(str, 1000, stdin);  
    for (int i = 0; i < 1000; i++)
    {
        if (str[i] != ' ' && firstSymbol == 0) {
            firstSymbol = 1;
        }
        if (str[i] == ' ' && str[i+1] == ' ') {
            continue;
        } else if (
            str[i] == ' ' &&
            str[i+1] != ' ' &&
            firstSymbol == 1 &&
            str[i+1] != '\n'
        ) {
            counter++;
        }
    }
 
    printf("%d\n", counter + 1);
    return 0;
}