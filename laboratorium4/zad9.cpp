/* 31.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    const int rozmiar = 100;
    bool tablica[rozmiar];

    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = i % 2;
    }

    bool wynik = 0;
    for (int i = 0; i < rozmiar; i++) {
        wynik ^= tablica[i];
    }
    
    //cout << "[";
    //for (int i = 0; i < rozmiar; i++) {
        //cout << tablica[i] << ", ";
    //}
    //cout << "]" << endl;

    cout << "Wynik XOR dla 100 elementów: " << wynik << endl;

    return 0;
}
