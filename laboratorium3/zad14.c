/* 24.03.2025
Karolina Wrzalik */

#include <stdio.h>

int main() {

    double num1, num2;
    char operation;

    printf("Wprowadz 1 liczbe: ");
    scanf("%lf", &num1);
    printf("Wprowadz 2 liczbe: ");
    scanf("%lf", &num2);

    printf("Wybierz operacje sposrod: +, -, *, / : ");
    scanf(" %c", &operation); 
    
    switch (operation) {
        case '+': 
            printf("Wynik: %.2lf\n", num1 + num2); 
            break;
        case '-': 
            printf("Wynik: %.2lf\n", num1 - num2); 
            break;
        case '*': 
            printf("Wynik: %.2lf\n", num1 * num2); 
            break;
        case '/': 
            if (num2 != 0) { 
                printf("Wynik: %.2lf\n", num1 / num2); 
            }  else  {
                printf("Nie mozna dzielic przez zero!\n"); 
            }
            break;
        default: 
            printf("Wprowadzono nieprawidlowa operacje!\n");
    }

    return 0;

}