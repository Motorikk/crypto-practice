#include <stdio.h>
// Необходимо суммировать все нечетные целые числа в диапазоне, который введёт пользователь с клавиатуры.
// Формат входных данных
// На вход дается диапазон целых чисел N (-1000000 ≤ N ≤ 1000000).
int main (){
    int i;
    int sum = 0;
    int n;

    
    for (i=0; i<=5;i++){
        if(n%2 !=0){
            sum= sum +n;
        }
    }
    printf("Сумма нечетных чисел в диапазоне:%d\n",sum);


 

    
    return 0;
}