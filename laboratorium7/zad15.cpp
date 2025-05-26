/* Karolina Wrzalik
12.05.2025 */

#include <iostream>

using namespace std;

int getValueAndCount(int i, const int arr[], int &n) {
    
    int size = n;
    int count = 0;

    for (int j = 0; j < size; ++j) {
        if (arr[j] != 0)
            ++count;
    }

    n = count;

    if (i < 0 || i >= size) {
        cerr << "Blad: nieprawidlowy indeks. Musi byc z przedzialu 0–" << size-1 << endl;
        return 1;
    }

    return arr[i];
}

int main() {

    int tab[] = { 5, 0, 2, -3, 0, 7 };
    int size = sizeof(tab) / sizeof(tab[0]);

    int index;
    cout << "Podaj indeks elementu, ktory chcesz odczytac (0–" << size-1 << "): ";
    cin >> index;

    int element = getValueAndCount(index, tab, size);

    if (element == 1) {
        return 1;
    }

    cout << "Element o indeksie " << index << ": " << element << endl;
    cout << "Liczba elementow w tablicy roznych od zera: " << size << endl;

    return 0;
}