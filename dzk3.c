#include <stdio.h>
// // Дано целое неотрицательное число N, определите число десятков в нем (предпоследнюю цифру числа). 
// Если предпоследней цифры нет, то можно считать, что число десятков равно нулю.
int main (){
    int N;
    int result=0;
    printf("Введіть число:");
    scanf("%i",&N );
    if(0<=N&& N<=1000000){
       result=(N/10)%10;  
    }
    
    printf("Число десятків в числі:%i\n",result);


    
    return 0;
}