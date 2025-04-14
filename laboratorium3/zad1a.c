/* 24.03.2025
Karolina Wrzalik */

#include <stdio.h>

int main() {
    char input;
    int xor_result = 0;
    int ones_count = 0;
    int invalid_count = 0;

    printf("Wprowadz liczby 0 lub 1, nacisnij Enter, aby zakonczyc:\n");

    while (1) {
        input = getchar();

        if (input == '\n') {
            break;
        }

        if (input == '0' || input == '1') {
            xor_result ^= (input - '0');
            if (input == '1') {
                ones_count++;
            }
        } else {
            invalid_count++;
        }
    }

    printf("Wynik operacji XOR: %d\n", xor_result);
    printf("Liczba jedynek: %d\n", ones_count);
    printf("Liczba blednych znakow: %d\n", invalid_count);

    return 0;
}