/* Karolina Wrzalik
28.04.2025 */

#include <iostream>
using namespace std;

int main() {

    int *p1;
    int *p2;

    cout << "Przed inicjalizacja:\n";
    cout << "p1 = " << p1 << "\n";
    cout << "*p1 = " << *p1 << "\n";
    cout << "p2 = " << p2 << "\n";
    cout << "*p2 = " << *p2 << "\n";

    p1 = new int;
    p2 = new int;

    cout << "\nPo zastosowaniu operatora new:\n";
    cout << "p1 = " << p1 << "\n";
    cout << "*p1 = " << *p1 << "\n";
    cout << "p2 = " << p2 << "\n";
    cout << "*p2 = " << *p2 << "\n";

    *p1 = 1;
    *p2 = 2;
    cout << "\nPo wpisaniu wartosci:\n";
    cout << " *p1 = " << *p1 << "\n";
    cout << " *p2 = " << *p2 << "\n";

    delete p1;
    delete p2;

    cout << "\nPo zwolnieniu pamieci (operator delete):\n";
    cout << "p1 = " << p1 << "\n";
    cout << "*p1 = " << *p1 << "\n";
    cout << "p2 = " << p2 << "\n";
    cout << "*p2 = " << *p2 << "\n";

    return 0;
}