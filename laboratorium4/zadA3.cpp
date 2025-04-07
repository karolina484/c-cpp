/* 31.03.2025
Karolina Wrzalik */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double a, b, c, delta, x0, x1, x2;

    cout << "Wprowadz wartosc wspolczynnika a = ";
    cin >> a;
    cout << "Wprowadz wartosc wspolczynnika b = ";
    cin >> b;
    cout << "Wprowadz wartosc wspolczynnika c = ";
    cin >> c;

    if (a == 0) {
        cout << "To nie jest rownanie kwadratowe!" << endl;
        return 1;
    }

    delta = b*b - 4*a*c;

    if (delta > 0) {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (delta == 0) {
        x0 = -b / (2*a);
        cout << "x0 = " << x0 << endl;
    } else {
        cout << "Równanie nie ma rozwiązań" << endl;
    }

    return 0;

}
