#include <stdio.h>
 
int main ()
{
    int array[10]={34,78,-12,57,-96,84,36,-77,61,16};
    int counter=0;
    for(int i = 9; i>=0; i--){
        if( array[i]<0){
            counter=counter+1;

        }

    
    }
    printf("%i, ", counter);


    return 0; 
   
}