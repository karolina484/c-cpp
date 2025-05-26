/* Karolina Wrzalik
12.05.2025 */

#include <iostream>

using namespace std;

int swap(int &a, int &b) {
    
    int result;
    if (a == b) {
        result = 0;
    } else if (a > b) {
        result = 1;
    } else {
        result = -1;
    }

    int tmp = a;
    a = b;
    b = tmp;
    return result;
}

int main() {

    int x = 5;
    int y = 3;
    cout << "Przed wywolaniem swap: x=" << x << ", y=" << y << "\n";
    int s = swap(x, y);
    cout << "Po wywolaniu swap: x=" << x << ", y=" << y << "\n";
    if (s == 0) {
        cout << "Funkcja zwrocila 0: liczby rowne\n";
    } else if (s == 1) {
        cout << "Funkcja zwrocila 1: x wieksze niz y\n";
    } else {
        cout << "Funkcja zwrocila -1: x mniejsze niz y\n";
    return 0;
    }
}