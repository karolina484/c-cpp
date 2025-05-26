/* Karolina Wrzalik
12.05.2025 */

#include <iostream>

using namespace std;

int liczBity(int x) {

    int count = 0;
    while (x) {
        x &= (x - 1);
        ++count;
    }
    return count;
}

int main() {

    int n;
    cout << "Podaj nieujemna liczbe calkowita: ";
    cin >> n;

    if (n < 0) {
        cout << "Podano liczbe ujemna. Sprobuj ponownie." << endl;
        return 1;
    }

    int wynik = liczBity(n);
    cout << "Liczba bitow ustawionych na 1 w liczbie " << n << " to: " << wynik << endl;

    return 0;
}