/* 31.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

enum BitMask {
    MASK0 = 0,
    BIT0 = 1,
    BIT1 = 2,
    BIT2 = 4,
    BIT3 = 8,
    BIT4 = 16,
    BIT5 = 32,
    BIT6 = 64,
    BIT7 = 128
};

int main() {

    int liczba, bit;
    
    cout << "Podaj liczbę z zakresu 0..255 : ";
    cin >> liczba;
    cout << "Podaj numer bitu z zakresu 0..7 : ";
    cin >> bit;

    int blad = (liczba < 0 || liczba > 255) ? 1 : ((bit < 0 || bit > 7) ? 2 : 0);

    switch(blad) {
        case 1:
            cout << "Blad: liczba " << liczba << " jest poza zakresem 0..255" << endl;
            break;
        case 2:
            cout << "Blad : bit " << bit << " jest poza zakresem 0..7" << endl;
            break;
        default: {
            BitMask mask;
            switch(bit) {
                case 0: 
                    mask = BIT0; 
                    break;
                case 1: 
                    mask = BIT1; 
                    break;
                case 2: 
                    mask = BIT2; 
                    break;
                case 3: 
                    mask = BIT3; 
                    break;
                case 4: 
                    mask = BIT4; 
                    break;
                case 5: 
                    mask = BIT5; 
                    break;
                case 6: 
                    mask = BIT6; 
                    break;
                case 7: 
                    mask = BIT7; 
                    break;
            }
            cout << ((liczba & mask) ? "TAK" : "NIE") << endl;
        }
    }

    return 0;
}
