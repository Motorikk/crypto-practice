#include <stdio.h>
int factorial(int n);

int main() {
    int N;
    printf("Введіть ціле число N (> 0): ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("Введіть число більше за 0\n");
    } else {
        int result = factorial(N);
        printf("Факторіал числа %d: %d\n", N, result);
    }
    
    return 0;
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
   
}
