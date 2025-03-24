/* 17.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    int a, b;
    cout << "Podaj pierwszy bit (0 lub 1): ";
    cin >> a;
    cout << "Podaj drugi bit (0 lub 1): ";
    cin >> b;

    int wynik = (a + b) % 2;

    cout << "Wynik operacji XOR: " << wynik << endl;

    return 0;

}
