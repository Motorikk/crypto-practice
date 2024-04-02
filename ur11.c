#include <stdio.h>
// Найдите индексы первого вхождения максимального элемента.
int main (){
     int t ;
    printf("Введите размер массива:");
    scanf("%d",&t);
    int array[t];
    printf("Введите элементы массива:\n");
    for(int i=0;i<t;i++){
        scanf("%d",&array[i]);
    }
    int maxelem = array[0];
    int maxindex = 0;
    for( int i = 0;i<t;i++){
        if(array[i]>maxelem){
            maxelem=array[i];
            maxindex=i;
        }
    }
    printf("Индекс первого максимального элемента: %d \n", maxindex);



    
    return 0;
}