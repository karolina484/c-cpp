/* Karolina Wrzalik
12.05.2025 */

#include <iostream>

using namespace std;

int findIndex(const int arr[], int n, int value) {

    for (int i = 0; i < n; ++i) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

int main() {

    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int n = sizeof(tab) / sizeof(tab[0]);

    int value;
    cout << "Podaj wartosc ktora chcesz wyszukac w tablicy: ";
    cin >> value;

    int index = findIndex(tab, n, value);
    if (index != -1)
        cout << "Znaleziono wartosc " << value << " na indeksie " << index << endl;
    else
        cout << "Nie znaleziono wartosci " << value << ". Funkcja zwróciła: " << index << endl;

    return 0;
}