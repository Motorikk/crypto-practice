#include <stdio.h>

int main()
{
    int array[5]={-6,7,69,-3,-5};
    int result = 0;
    for(int i = 0; i<5;++i){
        if (array[i]>0){
            result+=array[i];
        } 
    }
    printf( "%i\n",result);
    return 0;
}
    

    