#include <stdio.h>
// Составьте программу, которая вычисляет сумму 
// квадратов чисел от 1 до введенного вами целого числа N.
int main (){
    int n;
    int sum=0;
    printf("Введіть числот n:");
    scanf("%d", &n);
    if (n<0){
        n*=-1;
    }

    for (int i = 1; i<=n; i++)
    {
        sum+= i * i;
    }
    printf("Сумма квадратів чисел від 1 до %d: %d\n",n,sum);






    return 0;
}