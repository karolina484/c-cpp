/* Karolina Wrzalik
14.04.2025 */

#include <iostream>

using namespace std;

struct DANE {
    unsigned w_zakresie : 1;
    unsigned maska : 32;
    unsigned adres_ip : 32;
};

int main() {

    DANE d{};

    int x = 7;

    bool in1 = (x >= -3 && x < 7);
    bool in2 = (x >= 7 && x <= 21);
    d.w_zakresie = in1 || in2;

    cout << "Czy 7 jest w zakresie <-3..7) lub <7..21>? w_zakresie = " << d.w_zakresie << "\n(0 = nie, 1 = tak)\n\n";

    
    d.maska = 0xFFFFFF00u;

    unsigned ip = (192u << 24) | (168u << 16) | (0u <<  8) | (130u <<  0);
    d.adres_ip = ip;

    unsigned podsiec = d.adres_ip & d.maska;
    unsigned host = d.adres_ip & ~d.maska;

    cout << hex << uppercase;
    cout << "Podsiec = 0x" << podsiec << "\n";
    cout << "Numer hosta = 0x" << host << "\n";

    return 0;
}