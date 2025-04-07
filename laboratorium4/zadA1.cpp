/* 31.03.2025
Karolina Wrzalik */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x, alfa, y;

    cout << "Wprowadz wartosc x = ";
    cin >> x;
    cout << "Wprowadz wartosc alfa (w stopniach) = ";
    cin >> alfa;

    double alfa_radiany = alfa * M_PI / 180.0;

    double licznik1 = sqrt(pow(x, 2) + 7);
    double mianownik1 = 2*x;
    double liczba1 = licznik1 / mianownik1;

    double liczba2 = pow(x, 2);

    double licznik3 = sin(alfa_radiany);
    double mianownik3 = fabs(pow(x, 3));
    double liczba3 = licznik3 / mianownik3;

    y = liczba1 - liczba2 + liczba3;

    cout << "Wynik: " << y << endl;

    return 0;

}