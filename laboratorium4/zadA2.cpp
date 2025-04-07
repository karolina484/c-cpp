/* 31.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    double a, b, x;

    cout << "Wprowadz wartosc wspolczynnika a = ";
    cin >> a;
    cout << "Wprowadz wartosc wspolczynnika b = ";
    cin >> b;

    if (a != 0) {
        x = -b / a;
        cout << "Miejsce zerowe tego równania to: x = " << x << endl;
    } else if (a == 0 && b != 0) {
        cout << "Równanie sprzeczne - brak rozwiązania" << endl;
    } else {
        cout << "Nieskończenie wiele rozwiązań" << endl;
    }

    return 0;

}
