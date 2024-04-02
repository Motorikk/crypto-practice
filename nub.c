#include <stdio.h>

int main()
{
    //           0 1 2 3 4 5 6 7 8 9
    int array[] = {1, 6, 8, 0, 5, 9, 7, 0, 9, 2};
    int firstZeroIndex = 0;
    int secondZeroIndex = 0;
    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == 0)
        {
            firstZeroIndex = i;
            // printf("%i\n", firstZeroIndex);
            break;
        }
    }
    for (int i = firstZeroIndex + 1; i < 10; i++)
    {
        if (array[i] == 0)
        {
            secondZeroIndex = i;
            // printf("%i\n", secondZeroIndex);
        }
    }
    for (int i = firstZeroIndex + 1; i < secondZeroIndex; i++)
    {
        result += array[i];
    }
    printf("%d\n", result);
    return 0;
}
