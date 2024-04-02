#include <stdio.h>
 
int main ()
{

    int userValue = 6;
    int max =0;
     while (userValue!=0)
    {
        printf("Введіть число:");
        scanf("%d", &userValue);
        if(userValue==0) {
            break;
        }
    if ( max==0 || userValue>max)
    {
        max=userValue;
    }
    
    
    }
     
     printf("%d\n", max);

    return 0;
}
    

       
