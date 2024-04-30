#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "crypto.h"

int main()
{
    int userValue;
    printf("Яку операцію виконати?\n");
    printf("1 - Кодування символа\n");
    printf("2 - Декодування символа \n");
    printf("3 - Кодування строки\n");
    printf("4 - Декодування строки \n");
    printf("5 - Зворот\n");
    printf("6 - Шрифт Віженера\n");
    printf("7 - Декодування Шрифт Віженера\n");
    printf("8 - Бітовий хаос\n");
    printf("9 - Декодування Бітовий хаос\n");
    printf(" Введіть число:");

    scanf("%d", &userValue);
    if (userValue < 1 || userValue > 9)
    {
        printf("Помилка:Введіть число від 1 до 5\n");
        return 1;
    }
    if (userValue == 1)
    {

        // 1 кодування символа
        bool bits1[8];
        encode_char('A', bits1);
        for (int i = 0; i < 8; i++)
        {
            printf("%d", bits1[i]);
        }
        printf("\n");
    }
    if (userValue == 2)
    {
        // 2 декодування символа
        bool bits2[8] = {0, 1, 0, 0, 0, 0, 0, 1};
        printf("%c\n", decode_char(bits2));
    }
    if (userValue == 3)
    {
        // 3 кодування строк
        char text[] = "Hello, how are you?";
        const int len = strlen(text);
        bool bytes1[len + 1][8];
        encode_string(text, bytes1);
        for (int j = 0; j <= len; j++)
        {
            printf("%c: ", text[j]);
            for (int i = 0; i < 8; i++)
            {
                printf("%d", bytes1[j][i]);
            }
            printf("\n");
        }
    }
    if (userValue == 4)
    {
        // 4 декодування строк
        bool bytes2[7][8] = {
            {0, 1, 0, 0, 1, 0, 0, 0},
            {0, 1, 1, 0, 0, 1, 0, 1},
            {0, 1, 1, 0, 1, 1, 0, 0},
            {0, 1, 1, 0, 1, 1, 0, 0},
            {0, 1, 1, 0, 1, 1, 1, 1},
            {0, 0, 1, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0}};
        char string[7];
        decode_string(7, bytes2, string);
        printf("%s\n", string);
        // prints: Hello!
    }
    if (userValue == 5)
    {

        // 5 Peверсо
        char reversed[255];
        reverse("Hello world!", reversed);
        printf("%s\n", reversed);
        // "!DLROW OLLEH"
    }
    if (userValue == 6)
    {
        // 6 Шрифт Віженера
        char encrypted[255];
        // basic test with long text
        vigenere_encrypt("CoMPuTeR", "Hello world!", encrypted);
        printf("%s\n", encrypted);
        // "JSXAI PSINR!"
    }
    if (userValue == 7)
    {
        // 7 декод Віженера
        char decrypted[255];
        vigenere_decrypt("CoMPuTeR", decrypted, decrypted);
        printf("%s\n", decrypted);
        // "HELLO WORLD!
    }
    if (userValue == 8)
    {

        // 8 бітовий хаос

        unsigned char encrypted1[100];

        // basic test with long text
        bit_encrypt("Hello world!", encrypted1);
        for (int i = 0; i < 12; i++)
        {
            printf("%02x ", encrypted1[i]);
            // 80 9c 95 95 96 11 bc 96 b9 95 9d 10
        }
        printf("\n");
    }
    if (userValue == 9)
    {
        unsigned char encrypted1[100];
        unsigned char decrypted1[100];
        bit_decrypt(encrypted1, decrypted1);
        printf("\n");
        printf("%s\n", decrypted1);
    }
    return 0;
}
