#include <stdio.h>
// Сумма квадратов напишите функцию, которая вычисляет сумму квадратов чисел от 1 до введенного вами целого числа N.
// Формат входных данных.В параметрах передается 1 целое число N (-1000000 ≤ N ≤ 1000000).

    int sumOfSquares(int N,int sum);

int main()

{
    int N;
    scanf("%d", &N);
    int result =sum;
    printf("Suma kvadratikov: %d\n",result);    

    return 0;

} 
int sumOfSquares(int N, int sum){
    int sum = 0;
    for ( int i =1; i<=N; i++){
        sum+=i*i;
    }
    return sum;
    }
