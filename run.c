#include <stdio.h>

int main()
{
    int userValue = 5;
    int result=0; 
    // printf("Введіть число:");
    // scanf("%d", &userValue);
    while (userValue!=0)
    {
        printf("Введіть число:");
        scanf("%d", &userValue);
        if(userValue==0) {
            break;

        }       
        result=result+userValue;


    }
    printf("%d\n", result);

    
    return 0;

} 