#include <stdio.h>

// Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
int main (){
    int n;
    printf("Введите размер массива:");
    scanf("%d",&n);
    int array[n];
    printf("Введите элементы массива:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);

    }
    printf("Элементы массива,которые больше предыдущего:");
    for(int i=1;i<n;i++){
        if(array[i]>array[i-1]){
            printf("%d,",array[i]);
        }
    }


    
    return 0;
}