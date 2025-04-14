/* 24.03.2025
Karolina Wrzalik */

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    const unsigned long long N = 100000000ULL;
    double asc = 0.0;
    double desc = 0.0;

    for (unsigned long long n = 1; n <= N; n++) {
        asc += 1.0 / (n * n);
    }

    for (unsigned long long n = N; n >= 1; n--) {
        desc += 1.0 / (n * n);
    }

    printf("Suma odwrotnosci kwadratow od 1 do %llu (printf): %.15lf\n", N, asc);
    printf("Suma odwrotnosci kwadratow od %llu do 1 (printf): %.15lf\n", N, desc);

    cout << "Suma odwrotnosci kwadratow od 1 do " << N << " (cout): " << asc << endl;
    cout << "Suma odwrotnosci kwadratow od " << N << " do 1 (cout): " << desc << endl;

    return 0;
}
