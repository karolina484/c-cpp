/* Karolina Wrzalik
14.04.2025 */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> 
#include <algorithm>

using namespace std;

int main() {
    
    int N;
    cout << "Podaj liczbe elementow N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Liczba elementow musi byc wieksza od 0." << endl;
        return 1;
    }

    srand(time(NULL));

    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        v[i] = rand() % 101;
    }

    cout << "Wygenerowane liczby: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\n";

    sort(v.begin(), v.end());

    cout << "Powtarzajace sie wartosci: ";
    bool any = false;
    for (int i = 1; i < N; ++i) {
        if (v[i] == v[i-1] && (i == 1 || v[i] != v[i-2])) {
            cout << v[i] << " ";
            any = true;
        }
    }
    if (!any) {
        cout << "brak";
    }
    cout << "\n";

    return 0;
}