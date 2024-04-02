#include <stdio.h>
#include <string.h>
// Определить - является ли строка палиндромом.
int main()
{
    char str[1000];
    fgets(str,1000,stdin);
    int size = strlen(str)-1;
    int half = size /2;
    for ( int i = 0; i< half; i ++)
{
    if(str[i] != str[size-1-i]){
        printf(" Not polindrome");
        return 1;
    }
} 
printf(" Its a polidrome\n");
    return 0;

} 