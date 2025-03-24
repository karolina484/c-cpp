/* 17.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    double liczba;

    cout << "Podaj liczbę: ";
    cin >> liczba;

    bool wynik = (liczba >= -10 && liczba < 22) || (liczba > 30 && liczba < 40) || (liczba > 0 && liczba <= 3) || (liczba >= 5 && liczba <= 7);

    cout << wynik << endl;

    return 0;
}
