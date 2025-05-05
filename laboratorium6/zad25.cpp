/* Karolina Wrzalik
28.04.2025 */

#include <iostream>
using namespace std;

int main() {

    int tab[5] = {1, 2, 3, 4, 5};
    int *buf = new int[5];

    for (int i = 0; i < 5; i++) {
        cout << tab[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 5; i++) {
        cout << buf[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 5; i++) {
        buf[i] = tab[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << buf[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 5; i++) {
        buf[i]++;
    }

    for (int i = 0; i < 5; i++) {
        cout << buf[i] << " ";
    }
    cout << "\n";

    delete[] buf;
    return 0;
}