#include <stdio.h>
 
int main ()
{
    int array[10]={34,78,-12,57,96,84,36,77,61,16};
    for(int i = 9; i>=0; i--){
        // printf("%i, ", array[i]);
        if(array[i] %2 ==0 ){
            printf("%i, ", array[i]);

    }
    }
    return 0; 
   
}