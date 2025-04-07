/* 31.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    int x = 15;
    int y = -128;
    int z = 11;

    x <<= 4;
    cout << "15 <<= 4: " << x << endl;


    int y1 = y >> 1;
    int y2 = y << 1;

    cout << "-128 >> 1: " << y1 << endl;
    cout << "-128 << 1: " << y2 << endl;


    bool bit3 = z & (1 << 2);
    bool bit4 = z & (1 << 3);
    cout << "Czy w zmiennej o wartosci 11 jest ustawiony bit 3 lub 4? " << (bit3 || bit4 ? "Tak" : "Nie") << endl;
    cout << "Czy ustawiony jest 3 bit: " << bit3 << endl;
    cout << "Czy ustawiony jest 4 bit: " << bit4 << endl;
    
    
    return 0;

}