/* 17.03.2025
Karolina Wrzalik */

#include <iostream>

#define UNSIGNED_1 10U         
#define UNSIGNED_2 20U  

const int LICZBA1 = 5;          
const int LICZBA2 = 15;
const int LICZBA3 = 25;

using namespace std;

int main() {

    int suma = LICZBA1 + LICZBA2 + LICZBA3;
    double srednia = suma / 3.0;

    cout << "Suma: " << suma << endl;
    cout << "Średnia: " << srednia << endl;

    int odejmowanie_signed = LICZBA1 - LICZBA2;
    unsigned int odejmowanie_unsigned = UNSIGNED_2 - UNSIGNED_1;

    cout << "Odejmowanie int: " << odejmowanie_signed << endl;
    cout << "Odejmowanie unsigned int: " << odejmowanie_unsigned << endl;

    unsigned int odejmowanie_wiekszej_unsigned = UNSIGNED_1 - UNSIGNED_2;
    int int_odejmowanie_wiekszej_unsigned = UNSIGNED_1 - UNSIGNED_2;

    int wieksza = 30;
    unsigned int mniejsza = 5;
    unsigned int u_odejmowanie_mieszane = mniejsza - wieksza;
    int int_odejmowanie_mieszane = mniejsza - wieksza;

    unsigned int wieksza2 = 30;
    int mniejsza2 = 5;
    unsigned int u_odejmowanie_mieszane_2 = mniejsza2 - wieksza2;
    int int_odejmowanie_mieszane_2 = mniejsza2 - wieksza2;

    cout << "Odejmowanie większej od mniejszej unsigned (wynik w zmiennej unsigned int): " << odejmowanie_wiekszej_unsigned << endl;
    cout << "Odejmowanie większej od mniejszej unsigned (wynik w zmiennej int): " << int_odejmowanie_wiekszej_unsigned << endl;

    cout << "Odejmowanie mieszane (wynik w zmiennej unsigned int): " << u_odejmowanie_mieszane << endl;
    cout << "Odejmowanie mieszane (wynik w zmiennej int): " << int_odejmowanie_mieszane << endl;

    cout << "Odejmowanie mieszane (wynik w zmiennej unsigned int): " << u_odejmowanie_mieszane_2 << endl;
    cout << "Odejmowanie mieszane (wynik w zmiennej int): " << int_odejmowanie_mieszane_2 << endl;

    return 0;

}
