/* 31.03.2025
Karolina Wrzalik */

#include <iostream>
#include <bitset>

using namespace std;

int main() {

    cout << "char:" << endl;

    char c = 1;
    cout << "\nPrzesuwanie w lewo:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << (int)c << "   " << bitset<8>(c) << endl;
        c = c << 1;
    }
    
    c = 128;
    cout << "\nPrzesuwanie w prawo:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << (int)c << "   " << bitset<8>(c) << endl;
        c = c >> 1;
    }
    
    cout << "\nunsigned char:" << endl;
    
    unsigned char uc = 1;
    cout << "\nPrzesuwanie w lewo:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << (int)uc << "   " << bitset<8>(uc) << endl;
        uc = uc << 1;
    }
    
    uc = 128;
    cout << "\nPrzesuwanie w prawo:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << (int)uc << "   " << bitset<8>(uc) << endl;
        uc = uc >> 1;
    }
    
    cout << "\nint:" << endl;

    int intValue = 1;
    cout << "\nPrzesuwanie w lewo:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << intValue << "   " << bitset<8>(intValue) << endl;
        intValue = intValue << 1;
    }
    
    intValue = 128; 
    cout << "\nPrzesuwanie w prawo:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << intValue << "   " << bitset<8>(intValue) << endl;
        intValue = intValue >> 1;
    }
    
    return 0;
}
