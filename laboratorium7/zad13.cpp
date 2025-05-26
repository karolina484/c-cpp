/* Karolina Wrzalik
12.05.2025 */

#include <iostream>

using namespace std;

void wskSwap(int* wsk1, int* wsk2) {
    int tmp = *wsk1;
    *wsk1 = *wsk2;
    *wsk2 = tmp;
}

void refSwap(int &r1, int &r2) {
    int tmp = r1;
    r1 = r2;
    r2 = tmp;
}

void wskRefSwap(int* p, int &r) {
    int tmp = *p;
    *p  = r;
    r = tmp;
}

int main() {

    int a = 6, b = 8;
    cout << "Przed wskSwap: a=" << a << ", b=" << b << "\n";
    wskSwap(&a, &b);
    cout << "Po wskSwap: a=" << a << ", b=" << b << "\n\n";

    int c = 5, d = 7;
    cout << "Przed refSwap: c=" << c << ", d=" << d << "\n";
    refSwap(c, d);
    cout << "Po refSwap: c=" << c << ", d=" << d << "\n\n";

    int e = 13, f = 14;
    cout << "Przed wskRefSwap: e=" << e << ", f=" << f << "\n";
    wskRefSwap(&e, f);
    cout << "Po wskRefSwap: e=" << e << ", f=" << f << "\n";

    return 0;
}