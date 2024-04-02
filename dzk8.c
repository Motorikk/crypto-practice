#include <stdio.h>
// Ваша задача - написать программу с одним параметром:
// const int price - Необходимая сумма снятия (вводится с терминала)
// Программа вычисляет количество банкнот, необходимое для указанного параметра cуммы. Программа возвращает 
// количество банкнот, которые нужны на снятие, или возвращает значение -1, если запрашиваемая сумма не может 
// быть снята.

int calculateBanknotes(int price) {
    int banknotes[] = { 200, 100, 50, 20, 10};
    int count = 0;

    if (price % 5 != 0) {
        return -1;
    }

    for (int i = 0; i < sizeof(banknotes) / sizeof(banknotes[0]); i++) {
        count += price / banknotes[i];
        price %= banknotes[i];
    }

    return count;
}

int main() {
    const int price;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &price);

    int result = calculateBanknotes(price);

    if (result == -1) {
        printf("The requested amount cannot be withdrawn.\n");
    } else {
        printf("Number of banknotes needed: %d\n", result);
    }

    return 0;
}
