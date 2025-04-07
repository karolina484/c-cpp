/* 31.03.2025
Karolina Wrzalik */

#include <iostream>
#include <bitset>

using namespace std;

int main() {

    char x = 126;
    char x1, x2, x3;

    cout << "signed char = 126: " << endl;
    x1 = x>>1;
    cout << "126 >> 1: " << int(x1) << "  " << bitset<8>(x1) << endl;
    x2 = x<<1;
    cout << "126 << 1: " << int(x2) << "  " << bitset<8>(x2) << endl;
    x3 = x<<3;
    cout << "126 << 3: " << int(x3) << "  " << bitset<8>(x3) << endl;
    
    cout << "\n";

    unsigned char y = 126;
    unsigned char y1, y2, y3;

    cout << "unsigned char 126: " << endl;
    y1 = y>>1;
    cout << "126 >> 1: " << int(y1) << "  " << bitset<8>(y1) << endl;
    y2 = y<<1;
    cout << "126 << 1: " << int(y2) << "  " << bitset<8>(y2) << endl;
    y3 = y<<3;
    cout << "126 << 3: " << int(y3) << "  " << bitset<8>(y3) << endl;


    return 0;

    
    /* Przesunięcia bitowe w lewo wykonane na typie char i unsigned char dały różne wyniki.
    Dla zmiennych typu signed char, ponieważ zakres wartości został przekroczony 
    zarówno przy przesunięciu o 1 bit w lewo jak i o 3 bity w lewo,
    liczby zostały zinterpretowane jako ujemne.
    Stało się tak, ponieważ najstarszy bit (bit znaku) przy przesunięciu w lewo został zmieniony
    z 0 na 1 (0 oznacza liczbę dodatnią, 1 ujemną).
    Dlatego program wyświetla liczby ujemne.
    */

}

