#include <stdio.h>
// Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., 
// последний элемент переходит на место A[0]).
    void cyclic(int array[], int u){
    int y = array[u-1];
    for(int i = u-1; i>0; i--){
        array [i]= array[i-1];
         }
    array[0]=y;}

    int main (){
    int u;
    printf("Введите размер массива:");
    scanf("%d",&u);
    int array[u];
    printf("Введите элементы массива:\n");
    for(int i=0;i<u;i++){
        scanf("%d",&array[i]);
    }
    
    printf("До циклического сдвига:");
    for(int i =0; i<u;i++){
        printf("%d",array[i]);

    }
    cyclic(array,u);
    printf("\n После циклического сдвига:");
    for(int i=0;i<u;i++){
        printf("%d",array[i]);
    }


    
    return 0;
}