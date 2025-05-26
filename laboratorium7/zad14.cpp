/* Karolina Wrzalik
12.05.2025 */

#include <iostream>

using namespace std;

int* wskret() {
    int* wsk = new int;
    *wsk = 0;
    return wsk;
}

int* wskret(int x) {
    int* wsk = new int;
    *wsk = x;
    return wsk;
}

int main() {

    int* wsk1 = wskret();
    cout << "Wersja funkcji bez argumentu: *p1 = " << *wsk1 << "\n";

    int* wsk2 = wskret(21);
    cout << "Wersja funkcji z argumentem: *p2 = " << *wsk2 << "\n";

    delete wsk1;
    delete wsk2;

    return 0;
}