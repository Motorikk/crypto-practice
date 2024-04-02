#include <stdio.h>
// Создайте функцию float lift_a_car(const int stick_length, const int human_weight, const int car_weight) 
// с тремя параметрами:
// const int stick_length - Длина перекладины
// const int human_weight - Вес человека
// const int car_weight - Вес авто
// Функция согласно параметрам высчитает, на каком месте поместить точку опоры так, 
// чтобы человек смог собственным весом поднять машину. Функция должна вернуть значение с 
// точностью до 2 цифр после запятой (округлённо).

    float lift_a_car(const int stick_length, const int human_weight, const int car_weight){ 
    float balance_point = (float)(car_weight * stick_length) / (car_weight + human_weight);
    return balance_point;
    }
int main() {
    const int stick_length = 8; // Длина перекладины
    const int human_weight = 59; // Вес человека
    const int car_weight = 1987; // Вес автомобиля


    float balance_point = lift_a_car(stick_length, human_weight, car_weight);
    printf("Точка опоры для поднятия автомобиля: %.2f\n", balance_point);

 
    return 0;

} 