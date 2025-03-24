/* 17.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    double km;
    cout << "Podaj odległość w km: ";
    cin >> km;

    if (km > 0) {
        double mile = km / 1.6;
        cout << km << " km to " << mile << " mili.\n";
    } else {
        cout << "Odległość musi być dodatnia\n";
    }

    return 0;

}
