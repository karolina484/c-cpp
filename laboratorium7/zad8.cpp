/* Karolina Wrzalik
12.05.2025 */

#include <iostream>
#include <cmath>

using namespace std;

long int square(long int x) {
    return x * x;
}

double pprostok(long int a, long int b) {
    if (a <= 0 || b <= 0)
        return -1;
    return sqrt(square(a) + square(b));
}

int main() {

    long int a, b;
    cout << "Podaj dlugosc pierwszej przyprostokatnej: ";
    cin  >> a;
    cout << "Podaj dlugosc drugiej przyprostokatnej: ";
    cin  >> b;

    double c = pprostok(a, b);
    if (c == -1) {
        cout << "Blad: dlugosci przyprostokatnych musza byc wieksze od zera\n";
    } else {
        cout << "Dlugosc przeciwprostokatnej wynosi: " << c << endl;
    }

    return 0;
}