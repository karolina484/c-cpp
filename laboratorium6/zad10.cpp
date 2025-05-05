/* Karolina Wrzalik
28.04.2025 */

#include <iostream>
using namespace std;

int main() {

    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    cout << &liczba << endl;

    for (int i = 0; i < 5; ++i) {
        int *p = new int;
        cout << p << endl;
        delete p;
    }

    return 0;
}