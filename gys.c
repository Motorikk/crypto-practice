#include <stdio.h>

int main (){
    char string[200];
    int result=0;
    fgets(string,200, stdin);
    for(int i =0;i<200;i++){
       if(string[i]!='\0'){
        printf("%c-%d\n", string[i],(int)string[i]);
        result++;
        }
        else{
            break;
        }
    }
    printf("%d\n", result);
    
    return 0;
}