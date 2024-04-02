#include <stdio.h>

// Организовать беспрерывный ввод чисел с клавиатуры, пока пользователь не введёт 0. 
// После ввода нуля, показать на экран количество чисел, 
// которые были введены, их общую сумму и среднее арифметическое
int main (){
    int counter = 0;
    int Value = 0;
    int sum = 0;
    float a;
    printf("Введіть числа:\n");
    do{
        printf("Введіть числа:\n");
        scanf("%i",counter);
        sum = sum + counter;
        Value++;
       

    }while (counter !=0);
     a =(float) sum/Value;
    printf("%i\n",Value);
    printf("Сума:%i\n ", sum);
    printf("Середнє арифметичне: %.1f\n",a);

    
    


    
    return 0;
}