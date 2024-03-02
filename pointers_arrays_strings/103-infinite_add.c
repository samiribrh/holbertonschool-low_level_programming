#include "main.h"

/**
**infinite_add - Adds two numbers.
*@n1: First number
*@n2: Second number
*@r: The buffer to store the result
*@size_r: Size of the result buffer
*
*Return: Result buffer.
*/
char* reverse_string(char* str) {
    char temp;
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}

char* infinite_add(char* n1, char* n2, char* r, int size_r) {
    int carry = 0;
    int index = 0;

    // Reverse the input strings for easier processing
    reverse_string(n1);
    reverse_string(n2);

    while (*n1 != '\0' || *n2 != '\0' || carry != 0) {
        int digit_sum = carry + (*n1 - '0') + (*n2 - '0');
        carry = digit_sum / 10;
        int digit = digit_sum % 10;

        // Check if there is enough space in the result buffer
        if (index >= size_r - 1) {
            return NULL; // Not enough space
        }

        r[index] = digit + '0';
        index++;

        // Move to the next digits in the input strings
        if (*n1 != '\0') {
            n1++;
        }
        if (*n2 != '\0') {
            n2++;
        }
    }

    // Null-terminate the result string
    r[index] = '\0';

    // Reverse the result string before returning
    reverse_string(r);

    return r;
}

