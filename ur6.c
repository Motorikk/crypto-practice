#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Найдите количество положительных элементов в данном массиве
const int n = 10;
int main()
{
    int u = 0;
    srand(time(NULL));
    int array[n];
    for (int i = 0; i < n; i++)
    {
        int result = rand() % 21 - 10;
        array[i] = result;
        if (array[i] > 0)
        {
          u += 1;
        }
    }
    printf("\n");

    printf("%i\n", u);
   

    return 0;
}