/* 24.03.2025
Karolina Wrzalik */

#include <stdio.h>

int main() {

    double a, b, x;

    printf("Program wyliczajacy miejsce zerowe dla dowolnego rownania liniowego ax+b=0.\n");

    printf("Podaj wspolczynnik a: ");
    scanf("%lf", &a);

    printf("Podaj wspolczynnik b: ");
    scanf("%lf", &b);

    if (a != 0) {
        x = -b / a;
        printf("Miejsce zerowe tego rownania to: x = %.2lf\n", x);
    } else if (a == 0 && b != 0) {
        printf("Ta funkcja nie ma miejsc zerowych.\n");
    } else {
        printf("Ta funkcja ma nieskonczenie wiele miejsc zerowych.\n");
    }
    
    printf("Aby zakonczyc naciśnij Enter");
    getchar();
    getchar();

    return 0;
}