#include <stdio.h>
 
int main ()
{

    int userValue = 6;
    int min =0;
     while (userValue!=0)
    {
        printf("Введіть число:");
        scanf("%d", &userValue);
        if(userValue==0) {
            break;
        }
    if ( min == 0 || userValue< min)
    {
        min=userValue;
    }
    
    
    }
     
     printf("%d\n", min);

    return 0;
}