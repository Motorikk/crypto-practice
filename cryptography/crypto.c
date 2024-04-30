#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void reverse(const char *text, char *result)
{
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        result[i] = text[length - i - 1];
    }
    result[length] = '\0';
}
void encode_char(const unsigned char character, bool bits[8])
{
    int bit_values[8] = {128, 64, 32, 16, 8, 4, 2, 1};
    int charValue = (int)character;

    for (int i = 0; i < 8; i++)
    {
        bits[i] = 0;
        if (bit_values[i] <= charValue)
        {
            bits[i] = 1;
            charValue -= bit_values[i];
        }
    }
}
unsigned char decode_char(const bool bits[8])
{
    int Mot = 0;
    int bit_values[8] = {128, 64, 32, 16, 8, 4, 2, 1};
    for (int i = 0; i < 8; i++)
    {
        if (bits[i] > 0)
        {
            Mot += bit_values[i];
        }
    }
    return Mot;
}

void encode_string(const char string[], bool bytes[strlen(string) + 1][8])
{
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        encode_char(string[i], bytes[i]);
    }
}
void decode_string(const int rows, bool bytes[][8], char string[])
{
    int bit_values[8] = {128, 64, 32, 16, 8, 4, 2, 1};
    int charValue = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (bytes[i][j] == 1)
            {
                charValue += bit_values[j];
            }
        }
        string[i] = charValue;
        charValue = 0;
    }
}

void vigenere_encrypt(const char *key, const char *text, char *result)
{
    int textLength = strlen(text);
    int keyLength = strlen(key); // 6
    // Hello world! => Helloworld
    for (int i = 0, j = 0; i < textLength; i++, j++)
    {
        if (j >= keyLength)
        {
            j = 0;
        }
        char textSymbol = text[i];
        if (textSymbol >= 97 && textSymbol <= 122)
        {
            textSymbol -= 32; // to uppercase
        }
        // is not a letter
        if (!(textSymbol >= 65 && textSymbol <= 90))
        {
            j--;
            result[i] = textSymbol;
            continue;
        }
        char keySymbol = key[j];
        if (keySymbol >= 97 && keySymbol <= 122)
        {
            keySymbol -= 32; // to uppercase
        }
        int shift = (int)keySymbol - 65; // 2
        char tmp = textSymbol + shift;   // 88 (X) + 10
        if (tmp > 90)
        {
            tmp -= 26; //
        }
        result[i] = tmp;
    }
    result[strlen(text)] = '\0';
}
void vigenere_decrypt(const char *key, const char *text, char *result)
{
    int textLength = strlen(text);
    int keyLength = strlen(key); // 6
    // Hello world! => Helloworld
    for (int i = 0, j = 0; i < textLength; i++, j++)
    {
        if (j >= keyLength)
        {
            j = 0;
        }
        char textSymbol = text[i];
        if (textSymbol >= 97 && textSymbol <= 122)
        {
            textSymbol -= 32; // to uppercase
        }
        // is not a letter
        if (!(textSymbol >= 65 && textSymbol <= 90))
        {
            j--;
            result[i] = textSymbol;
            continue;
        }
        char keySymbol = key[j];
        if (keySymbol >= 97 && keySymbol <= 122)
        {
            keySymbol -= 32; // to uppercase
        }
        int shift = (int)keySymbol - 65; // 2
        char tmp = textSymbol - shift;   // 88 (X) + 10
        if (tmp < 65)
        {
            tmp += 26; //
        }
        result[i] = tmp;
    }
    result[strlen(text)] = '\0';
}

void bit_encrypt(const char *text, unsigned char *result)
{
    bool bits[8];
    bool encr[8];
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        encode_char(text[i], bits);
        for (int j = 0; j < 4; j += 2)
        {
            encr[j] = bits[j + 1];
            encr[j + 1] = bits[j];
        }
        for (int j = 0; j < 4; j++)
        {
            if (encr[j] != bits[j + 4])
            {
                encr[j + 4] = 1;
            }
            else if (encr[j] == bits[j + 4])
            {
                encr[j + 4] = 0;
            }
        }
        result[i] = decode_char(encr);
    }
    // result[stringLengthn(text)]='\0';
}

void bit_decrypt(const unsigned char *text, unsigned char *result)
{

    bool bits[8];
    int len = 0;
    while (text[len] != '\0')
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        encode_char(text[i], bits);
        for (int j = 0; j < 4; j++)
        {
            if (bits[j] != bits[j + 4])
            {
                bits[j + 4] = 1;
            }
            else
            {
                bits[j + 4] = 0;
            }
            int tmp = bits[0];
            bits[0] = bits[1];
            bits[1] = tmp;

            tmp = bits[2];
            bits[2] = bits[3];
            bits[3] = tmp;

            result[1] = decode_char(bits);
        }
        result[len] = '\0';
    }
}
