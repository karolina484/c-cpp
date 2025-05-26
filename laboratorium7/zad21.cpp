/* Karolina Wrzalik
12.05.2025 */

#include <iostream>
#include <algorithm>

using namespace std;

void przesun(int t[], int n, int ile = 1, char kierunek = 'L') {
    
    if (n <= 0) return;

    int k = ile % n;
    if (k < 0) k += n;
    if (k == 0) return;

    if (kierunek == 'P' || kierunek == 'p') {
        reverse(t + n - k, t + n);
        reverse(t, t + n);
        reverse(t, t + k);
        reverse(t + k, t + n);
    }
    else if (kierunek == 'L' || kierunek == 'l') {
        reverse(t, t + k);
        reverse(t, t + n);
        reverse(t, t + (n - k));
        reverse(t + (n - k), t + n);
    } else {
        cout << "Nieznany kierunek przesuniecia. Uzyj 'L' lub 'P'.\n";
        return;
    }
}

int main() {

    const int n = 10;
    int tab[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Oryginalna tablica: ";
    for (int x : tab) cout << x << ' ';
    cout << "\n\n";

    przesun(tab, n);
    cout << "Tablica po przesunieciu o 1 w lewo: ";
    for (int x : tab) cout << x << ' ';
    cout << "\n\n";

    przesun(tab, n, 3, 'P');
    cout << "Tablica po przesunieciu o 3 w prawo: ";
    for (int x : tab) cout << x << ' ';
    cout << "\n";

    return 0;
}