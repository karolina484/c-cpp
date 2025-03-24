/* 17.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    int liczba;

    // preinkrementacja

    cout << "Preinkrementacja" << "\n";

    cout << "Wprowadź liczbę całkowitą: ";
    cin >> liczba;

    cout << ++liczba << "\n";

    cout << "\n";

    // postinkremetacja

    cout << "Postinkrementacja" << "\n";

    cout << "Wprowadź liczbę całkowitą: ";
    cin >> liczba;

    cout << liczba++ << "\n";
    cout << liczba << "\n";

    cout << "\n";

    // dodanie 1

    cout << "Zwiększenie wartości zmiennej o 1" << "\n";

    cout << "Wprowadź liczbę całkowitą: ";
    cin >> liczba;

    liczba += 1;
    //liczba = liczba + 1;
    cout << liczba << "\n";

    return 0;

}
