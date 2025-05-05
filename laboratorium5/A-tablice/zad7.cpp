/* Karolina Wrzalik
14.04.2025 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    srand(time(NULL));

    const int NUM_LOSOWAN = 10000;
    int seriesCount;
    cout << "Podaj liczbe serii losowan: ";
    cin >> seriesCount;

    cout << left
        << setw(6) << "Seria"
        << setw(6) << "Zera"
        << setw(8) << "1000"
        << setw(9) << "Parzyste"
        << setw(9) << "Nieparz"
        << setw(7) << "Podz3"
        << setw(10) << "SumaParz"
        << setw(13) << "SumaNieparz"
        << '\n';

    for (int s = 1; s <= seriesCount; ++s) {
        int countZero = 0, countThousand = 0, countEven = 0, countOdd = 0, countDiv3  = 0;
        long long sumEven = 0, sumOdd  = 0;

        for (int i = 0; i < NUM_LOSOWAN; ++i) {
            int x = rand() % 1001;

            if (x == 0) ++countZero;
            if (x == 1000) ++countThousand;
            if (x % 2 == 0) {
                ++countEven;
                sumEven += x;
            } else {
                ++countOdd;
                sumOdd += x;
            }
            if (x % 3 == 0) ++countDiv3;
        }

        cout << right
            << setw(6) << s
            << setw(6) << countZero
            << setw(8) << countThousand
            << setw(9) << countEven
            << setw(9) << countOdd
            << setw(7) << countDiv3
            << setw(10) << sumEven
            << setw(13) << sumOdd
            << '\n';
    }

    return 0;
}