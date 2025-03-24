/* 17.03.2025
Karolina Wrzalik */

#include <iostream>
#include <float.h>
#include <climits>

using namespace std;

int main() {

    cout << "int:\n\n";

    int a = INT_MAX;
    cout << "INT_MAX: " << a << "\n";
    a += 1;
    cout << "INT_MAX + 1: " << a << "\n";

    cout << "\n";

    int b = INT_MIN;
    cout << "INT_MIN: " << b << "\n";
    b -= 1;
    cout << "INT_MIN - 1: " << b << "\n";

    cout << "\n";

    cout << "unsigned int:\n\n";

    unsigned int c = UINT_MAX;
    cout << "UINT_MAX: " << c << "\n";
    c += 1;
    cout << "UINT_MAX + 1: " << c << "\n";

    cout << "\n";

    unsigned int d = 0;
    cout << "najmniejsza wartość unsigned int: " << d << "\n";
    d -= 1;
    cout << "najmniejsza wartość unsigned int - 1: " << d << "\n";

    cout << "\n";

    cout << "bool:\n\n";

    bool e = 0;
    bool f = 1;
    bool g = 5;
    bool h = 'a';
    bool i = "programowanie";

    cout << "0: " << e << "\n";
    cout << "1: " << f << "\n";
    cout << "5: " << g << "\n";
    cout << "\'a\': " << h << "\n";
    cout << "\"programowanie\": " << i << "\n";

    cout << "\n";

    cout << "long:\n\n";

    long j = LONG_MAX;
    cout << "LONG_MAX: " << j << "\n";
    j += 1;
    cout << "LONG_MAX + 1: " << j << "\n";

    cout << "\n";

    long k = LONG_MIN;
    cout << "LONG_MIN: " << k << "\n";
    k -= 1;
    cout << "LONG_MIN - 1: " << k << "\n";

    cout << "\n";

    cout << "unsigned long:\n\n";

    unsigned long p = ULONG_MAX;
    cout << "ULONG_MAX: " << p << "\n";
    p += 1;
    cout << "ULONG_MAX + 1: " << p << "\n";

    cout << "\n";

    unsigned long r = 0;
    cout << "najmniejsza wartość unsigned long: " << r << "\n";
    r -= 1;
    cout << "najmniejsza wartość unsigned long - 1: " << r << "\n";

    cout << "\n";

    cout << "char:\n\n";

    char l = 127;
    cout << "CHAR_MAX: " << int(l) << "\n";
    l += 1;
    cout << "CHAR_MAX + 1: " << int(l) << "\n";

    cout << "\n";

    char m = -128;
    cout << "CHAR_MIN: " << int(m) << "\n";
    m -= 1;
    cout << "CHAR_MIN - 1: " << int(m) << "\n";

    cout << "\n";

    cout << "unsigned char:\n\n";

    unsigned char n  = 255;
    cout << "CHAR_MAX: " << int(n) << "\n";
    n += 1;
    cout << "CHAR_MAX + 1: " << int(n) << "\n";

    cout << "\n";

    unsigned char o = 0;
    cout << "CHAR_MIN: " << int(o) << "\n";
    o -= 1;
    cout << "CHAR_MIN - 1: " << int(o) << "\n";

    cout << "\n";

    cout << "float:\n\n";

    float s = FLT_MAX;
    cout << "FLT_MAX: " << s << "\n";
    s *= 2;
    cout << "FLT_MAX * 2: " << s << "\n";

    return 0;
    
}
