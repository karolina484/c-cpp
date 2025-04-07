/* 31.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    int liczba;
    cout << "Podaj liczbe dziesietna z przedzialu 0-255: ";
    cin >> liczba;

    if (liczba < 0 || liczba > 255) {
        cout << "Liczba jest poza zakresem 0-255" << endl;
        return 1;
    }
    
    cout << "Liczba " << liczba << " binarnie: ";

    for (int i = 7; i >= 0; i--) {
        int bit = (liczba >> i) & 1;
        cout << bit;
    }
    
    cout << endl;

    return 0;
}

