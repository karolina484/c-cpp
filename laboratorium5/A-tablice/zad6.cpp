/* Karolina Wrzalik
14.04.2025 */

#include <iostream>

using namespace std;

int main() {

    const int MAX = 100;
    int n;
    cout << "Podaj liczbe elementow w tablicy (maksymalnie " << MAX << "): ";
    cin >> n;

    if (n <= 0 || n > MAX) {
        cout << "Niepoprawny rozmiar tablicy." << endl;
        return 1;
    }

    int array[MAX];

    cout << "Podaj " << n << " elementow typu int (kazdy wprowadz w nowej linii - nacisnij Enter po wprowadzeniu jednego elementu):\n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    if (n % 2 == 1) {
        int mid = n / 2;
        cout << "Srodkowy element: " << array[mid] << endl;
        cout << "Indeks srodkowego elementu: " << mid << endl;
    } else {
        int mid1 = (n / 2) - 1;
        int mid2 = n / 2;
        cout << "Tablica ma parzysta liczbe elementow." << endl;
        cout << "Srodkowe elementy: " << array[mid1] << " (indeks " << mid1 << ") i "<< array[mid2] << " (indeks " << mid2 << ")" << endl;
    }

    cout << "Tablica przed odwroceniem:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int limit;
    if (n % 2 == 0) {
        limit = (n / 2) - 1;
    } else {
        limit = n / 2;
    }

    int tmp;
    for (int i = 0; i < limit; i++) {
        tmp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = tmp;
    }

    cout << "Tablica po odwroceniu:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}