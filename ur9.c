#include <stdio.h>
// Выведите значение наименьшего из всех положительных элементов в массиве. 
// Известно, что в массиве есть хотя бы один положительный элемент.

int main (){
    int m;
    printf("Введите размер массива:");
    scanf("%d",&m);
    int array[m];
    printf("Введите элементы массива:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&array[i]);

    }
    int min;
    for(int i = 0; i<m; i++){
        if(array[i]>0 && array[i]< min){
            min=array[i];
        }
    }
    printf("Наименший положительный элемент: %d\n", min);

    
    return 0;
}