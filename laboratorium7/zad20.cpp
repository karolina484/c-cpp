/* Karolina Wrzalik
12.05.2025 */

#include <iostream>

using namespace std;

int isLeapYear(int year) {

    if (year % 400 == 0) {
        return 1;
    } else if (year % 100 == 0) {
        return 0;
    } else if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int year;
    cout << "Podaj rok: ";
    cin >> year;

    if (isLeapYear(year))
        cout << year << " jest rokiem przestepnym.\n";
    else
        cout << year << " nie jest rokiem przestepnym.\n";

    return 0;
}