/* 24.02.2025
Karolina Wrzalik */

#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, delta;

    printf("Podaj wspolczynnik a: ");
    scanf("%lf", &a);

    printf("Podaj wspolczynnik b: ");
    scanf("%lf", &b);

    printf("Podaj wspolczynnik c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("To nie jest rownanie kwadratowe\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (delta == 0) {
        double x0 =  -b / (2 * a);
        printf("x0 = %.2lf\n", x0);
    } else {
        printf("Brak rozwiazan.\n");
    }

    return 0;

}