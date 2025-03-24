/* 17.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    double liczba;

    cout << "Podaj liczbę: ";
    cin >> liczba;

    bool przedzial1 = (liczba >= -10 && liczba < 20);
    bool przedzial2 = (liczba > 0 && liczba <= 10);
    bool przedzial3 = (liczba >= -3 && liczba <= 3);

    if (przedzial1 || przedzial2 || przedzial3) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}
