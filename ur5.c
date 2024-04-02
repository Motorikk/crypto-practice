#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Cлучайным образом заполнить массив элементами 
// (включая отрицательные значения) и вывести на экран только те, которые будут негативными
const int n = 10;
int main (){
     srand(time(NULL));
    int array[n];
    for (int i = 0; i < n; i++){
        int result = rand() %201-100;
        array[i]=result;
        if(array[i]<0){
            printf("%i,", array[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%i\n",i);
    }

    

    
    return 0;
}