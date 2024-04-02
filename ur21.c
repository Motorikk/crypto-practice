// Дана строка. Удалите k-ый символ в ней
#include <stdio.h>
#include <string.h>
 void deleteChar (char * str, int k){
    int len = strlen(str);
    if (k<0 || k>= len){
        printf("Invalid position\n");
        return;
    }
    for( int i = k; i<len-1;i++){
        str[i]=str[i+1];

    }
    str[len -1]= '\0';
 }
int main()
{
 char str[1000];
 int k;
 printf("Enter a string:");
scanf("%s",str);
printf("Enter the position of the  charecter to delete:");
scanf("%d",&k);
deleteChar(str,k);
printf(" Resulting string: %s\n",str);
    return 0;

} 
