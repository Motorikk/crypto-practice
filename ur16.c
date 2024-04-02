#include <stdio.h>
// Напишите программу, которая запрашивает у пользователя год и проверяет, является ли этот год високосным.
// Год является високосным, если он делится на 4, но не делится на 100, за исключением тех лет,
// которые делятся на 400.
int main()
{
    int r;

    printf("Введіть рік:");
    scanf("%d", &r);
    if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0))
    {
        printf("%d рік- високосний.\n", r);
    }
    else
    {
        printf("%d рік - не високосний.\n", r);
    }

    return 0;
}