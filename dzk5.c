#include <stdio.h>
// В бригаде, работающей на уборке сена, имеется N сенокосилок. Первая сенокосилка работала m минут,
// а каждая следующая на 10 минут больше,
// чем предыдущая.Сколько часов проработала вся бригада? Время вывести в часах и минутах.
int main()
{
    int n;
    int m;
    int total = 0;
    int y = m;
    int hours;
    int minut;

    printf("Введите количество сенокосилок:");
    scanf("%d", &n);
    printf("Введите время работы первой сенокосилки:");
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        total += y;
        y += 10;
    }
    hours = total / 60;
    minut = total % 60;
    printf("Время работы всей бригады: %d часов %d минут\n", hours, minut);

    return 0;
}