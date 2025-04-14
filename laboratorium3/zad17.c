/* 24.03.2025
Karolina Wrzalik */

#include <stdio.h>

int main() {

    int N;
    int min = 1;
    int max;
    int mid;
    char user_answer;
    int user_choice;

    // printf("Podaj N (zakres przedzialu 1..N): ");
    // scanf("%d", &N);

    // while (N <= 0) {
    //     printf("Wartosc N musi byc wieksza od 0. Sprobuj ponownie.\n");
    //     printf("Podaj N (zakres przedzialu 1..N): ");
    //     scanf("%d", &N);
    // }
    
    // max = N;


    // do {
    //     printf("Podaj N (zakres przedzialu 1..N): ");
    //     scanf("%d", &N);
    //     if (N <= 0) {
    //         printf("Wartosc N musi byc wieksza od 0. Sprobuj ponownie.\n");
    //     }
    // } while (N <= 0);
       
    // max = N;


    do {
        printf("Podaj N - zakres przedzialu 1..N. Musi byc wieksze od 0: ");
        scanf("%d", &N);
    } while (N <= 0);
       
    max = N;
    

    do {
        printf("Wybierz liczbe z zakresu 1..%d: ", N);
        scanf("%d", &user_choice); //
    } while (user_choice > N || user_choice < 1);
    
    printf("Jesli zgadne liczbe, odpowiedz: t\n");
    printf("Jesli liczba bedzie za duza, odpowiedz: d\n");
    printf("Jesli liczba bedzie za mala, odpowiedz: m\n");


    // do {
    //     mid = (min + max) / 2;
    //     printf("Czy wybrana przez ciebie liczba to %d ?: ", mid);
    //     scanf(" %c", &user_answer);

    //     if (user_answer == 't'&& mid == user_choice) {
    //         printf("Odgadnalem liczbe, ktora wybrales: %d.\n", mid);
    //         break;
    //     } else if (user_answer == 'd' && mid > user_choice) {
    //         max = mid - 1;
    //     } else if (user_answer == 'm' && mid < user_choice) {
    //         min = mid + 1;
    //     } else {
    //         printf("Bledna odpowiedz! Odpowiedz ponownie\n");
    //     }

    // } while (min <= max);

    while (min <= max) {
        mid = (min + max) / 2;
        printf("Czy wybrana przez ciebie liczba to %d ?: ", mid);
        scanf(" %c", &user_answer);

        if (user_answer == 't'&& mid == user_choice) { 
            printf("Odgadnalem liczbe, ktora wybrales: %d.\n", mid);
            break;
        } else if (user_answer == 'd' && mid > user_choice) {
            max = mid - 1;
        } else if (user_answer == 'm' && mid < user_choice) {
            min = mid + 1;
        } else {
            printf("Bledna odpowiedz! Odpowiedz ponownie\n");
        }
    }

    return 0;
}
