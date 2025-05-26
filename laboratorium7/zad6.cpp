/* Karolina Wrzalik
12.05.2025 */

#include <iostream>

using namespace std;

long int square(long int x) {
    return x * x;
}

void square_ref(long int &x) {
    x = x * x;
}

int main() {

    long int a = 5;
    cout << "Przed square(a): a = " << a << endl;
    cout << "Wywolanie square(a) = " << square(a) << endl;
    cout << "Wartosc a po wywolaniu square(a): " << a << endl;

    cout << endl;

    long int b = 6;
    cout << "Przed square_ref(b): b = " << b << endl;
    square_ref(b);
    cout << "Wartosc b po wywolaniu square_ref(b): b = " << b << endl;

    return 0;
}