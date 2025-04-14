/* 24.03.2025
Karolina Wrzalik */

#include <stdio.h>

double powerFor(double base, int exp) {
    double result = 1.0;
    int absExp = (exp < 0) ? -exp : exp;
    for (int i = 0; i < absExp; i++) {
        result *= base;
    }
    if(exp < 0) {
        result = 1.0 / result;
    }
    return result;
}

double powerWhile(double base, int exp) {
    double result = 1.0;
    int absExp = (exp < 0) ? -exp : exp;
    int counter = 0;
    while(counter < absExp) {
        result *= base;
        counter++;
    }
    if(exp < 0) {
        result = 1.0 / result;
    }
    return result;
}

double powerDoWhile(double base, int exp) {
    double result = 1.0;
    int absExp = (exp < 0) ? -exp : exp;
    int counter = 0;
    if(absExp > 0) {
        do {
            result *= base;
            counter++;
        } while(counter < absExp);
    }
    if(exp < 0) {
        result = 1.0 / result;
    }
    return result;
}

int main() {
    double base;
    int exponent;
    
    printf("Podaj podstawe: ");
    if(scanf("%lf", &base) != 1) {
        printf("Blad przy wczytywaniu podstawy.\n");
        return 1;
    }
    
    printf("Podaj wykladnik: ");
    if(scanf("%d", &exponent) != 1) {
        printf("Blad przy wczytywaniu wykladnika.\n");
        return 1;
    }
    
    if(base == 0 && exponent < 0) {
        printf("Blad: nie mozna podniesc 0 do ujemnego wykladnika.\n");
        return 1;
    }
    
    double resultFor = powerFor(base, exponent);
    double resultWhile = powerWhile(base, exponent);
    double resultDoWhile = powerDoWhile(base, exponent);
    
    printf("\nWyniki obliczen:\n");
    printf("Petla for:          %lf\n", resultFor);
    printf("Petla while:        %lf\n", resultWhile);
    printf("Petla do..while:    %lf\n", resultDoWhile);
    
    return 0;
}