/* 31.03.2025
Karolina Wrzalik */

#include <iostream>
#include <bitset>

using namespace std;

int main() {

    unsigned char x = 0b00001011;
    cout << "Wartosc poczatkowa" << endl;
    cout << (int)x << "   " << bitset<8>(x) << endl << "\n";

    x = x & ~(1 << 0);
    cout << "Po zresetowaniu bitu LSB" << endl;
    cout << (int)x << "   " << bitset<8>(x) << endl << "\n";

    x = x | (1 << 7);
    cout << "Po ustawieniu bitu MSB" << endl;
    cout << (int)x << "   " << bitset<8>(x) << endl << "\n";

    x = x | (1 << 1);
    cout << "Po ustawieniu bitu nr 2" << endl;
    cout << (int)x << "   " << bitset<8>(x) << endl << "\n";

    cout << "Sprawdzenie bitu nr 4" << endl;
    if (x & (1 << 3)) {
        cout << "Bit 4 jest ustawiony" << endl << "\n";
    } else {
        cout << "Bit 4 nie jest ustawiony" << endl << "\n" ;
    }

    cout << "Sprawdzenie bitow nr 5 i 6" << endl;
    bool bit5 = (x & (1 << 4)) != 0;
    bool bit6 = (x & (1 << 5)) != 0;
    if (bit5 && bit6) {
        cout << "Bity 5 i 6 sa ustawione" << endl << "\n";
    } else {
        cout << "Bit 5 lub 6 nie jest ustawiony" << endl << "\n";
    }

    x = x ^ (1 << 2);
    cout << "Po inwersji bitu nr 3" << endl;
    cout << (int)x << "   " << bitset<8>(x) << endl << "\n";


    x = x ^ (1 << 2);
    cout << "Po ponownej inwersji bitu nr 3" << endl;
    cout << (int)x << "   " << bitset<8>(x) << endl << "\n";


    x = x << 2;
    cout << "Po przesunieciu o 2 bity w lewo" << endl;
    cout << (int)x << "   " << bitset<8>(x) << endl;

    return 0;
}