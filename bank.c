#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%i,%i", &a, &b);
    int result= a * b/100 + a ; 

    printf("c=%i\n", result);
    
    return 0;

} 