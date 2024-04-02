#include <stdio.h>

// N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков достанется каждой белочке.

int main (){
    int N;
    int K;
    int result=0;
    printf("Введіть кількість білочок: ");
    scanf("%i", &N);
    printf("Введіть кількість горішків:");
    scanf("%i", &K);
    if(N<=1000 && K<=1000){
         result= K/N;

    }
    
     

     printf("Результат:%i\n ", result);



    
    return 0;
}