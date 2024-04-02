#include <stdio.h>

int main (){
    int a;
    int b;
    int result=0;

    printf("Введіть перше число: ");
    scanf("%i\n", &a);
    printf("Введіть друге число:");
    scanf("%i\n", &b);

    result = a*b;
    if (result<0){
        printf( "Результат:%i\n", result); }


    
    return 0;
}