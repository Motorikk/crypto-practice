/*
  Описание задачи: Напишите программу на C, которая находит пару элементов в массиве,
  произведение которых максимально. Например, для массива [1, 4, 3, 6, 7, 0],
  программа должна вывести пару (6, 7).
 */
#include <stdio.h>

int main()
{
    int array_size = 6;
    int array[] = {1, 3, 5, 7, 8, 0};
    int max = array[0] + array[1];
    int i1 = array[0];
    int i2 = array[1];
    for (int i = 0; i < array_size; i++)
    {
        for (int j = 0; j < array_size; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (max < array[i] + array[j])
            {
                max = array[i] + array[j];
                i1 = array[i];
                i2 = array[j];
            }
        }
    }
    printf("%d , %d\n", i1, i2);
    return 0;
}