/* 17.03.2025
Karolina Wrzalik */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double liczba; 
    cout << "Podaj liczbę rzeczywistą: ";
    cin >> liczba;

    double wartoscBezwzgledna = fabs(liczba);

    cout << "Wartość bezwzględna liczby " << liczba << " to " << wartoscBezwzgledna << endl;

    return 0;

}
