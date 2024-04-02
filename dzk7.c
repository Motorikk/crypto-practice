#include <stdio.h>
// Найдите все четырехзначные числа, сумма цифр которых равна 15

int main()
{
    for (int num  = 1000; num <= 9999; num++)
    {
        int sum = 0;
        int temp = num;
        while (temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 15)
        {
            printf("Summa cisel: %d\n", num);
        }
    }

    return 0;
}
