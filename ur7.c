#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).
// Формат входных данных
// В первой строке вводится количество элементов в массиве, значения генерируются случайно.
const int n = 10;
int main (){
     srand(time(NULL));
    int array[n];
    for (int i = 0; i < n; i++)
    {
        int result = rand() % 100;
        array[i] = result;
        if (i%2==0){
            printf(" [%d]-%d\n",i,array[i]);

        }
    }

     

    
    return 0;
}