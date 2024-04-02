#include <stdio.h>

int main (){
//  Текст вводится через терминал. Нужно посчитать количество слов в тексте и вевсти результат на экран.
 
    char string[150];
    int counter=0;

    scanf("%s\n", string);
    for ( int i =0; string[i]!='\0'; i++){
        counter++;

    }
    printf("Кількість слів в тексті: %d\n", counter);








    
    return 0;
}