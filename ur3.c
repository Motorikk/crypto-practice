// Даны числа от -20 до -50. Напечатать те из них, которые делятся на 3, но не делятся на 5.?
#include <stdio.h>

int main (){
    int i;
    printf("Числа від -20 до -50 які діляться на 3 но не діляться на 5:\n");
    for(i= -20; i>=-50; i--){
        if(i%3==0 && i% 5!=0){
            printf("%d\n",i);
        }
    }

    
    return 0;
}