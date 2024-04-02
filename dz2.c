#include <stdio.h>

int main()
{
    int array[] = {100, 4, 6, 8, 45, 14};
    int min=array[0];
    int finalIndex = 0;
    for (int i = 0; i < 6; i++)
    {
        if (min == 0 || array[i] < min)
        {
            min = array[i];
            finalIndex = i;
        }
    }
    printf("%d\n", finalIndex);

    return 0;
}