/* 24.03.2025
Karolina Wrzalik */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int random_number = rand() % 100 + 1;
    int user_guess;

    while (1) {

        printf("Wprowadz liczbe z przedzialu 1..100. Jesli chcesz zakonczyc gre, wprowadz 0 : ");
        scanf("%d", &user_guess);

        if (user_guess == 0) {
            printf("Liczba, ktora wylosowano to: %d\n", random_number);
            break;
        }

        if (user_guess > random_number) {
            printf("Podana wartosc jest za duza.\n");
        } else if (user_guess < random_number) {
            printf("Podana wartosc jest za mala.\n");
        } else {
            printf("random_number: %d\n", random_number);
            printf("user_guess: %d\n", user_guess);
            printf("Brawo! Liczba zostala odgadnieta\n");
            break;
        }

    }

    return 0;

}
