#include <stdio.h>

int main()
{
    int array[17]={-8,5,78,-2,9,4,-6,65,-10,0,7,87,-9,45,-3,33,45};
    for(int i=1;i<17;i++){
        if( i%4 ==0){
        printf( "%i\n",array[i]);

    }
    }
    return 0;
}   