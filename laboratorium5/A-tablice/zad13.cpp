/* Karolina Wrzalik
14.04.2025 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    
    const int N = 10;
    int m[N][N];

    srand(time(NULL));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            m[i][j] = rand() % 100;

    for (int i = 0; i < N; ++i)
        m[i][i] = i;

    cout << "Macierz:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << setw(3) << m[i][j];
        cout << '\n';
    }

    int suma = 0;
    for (int i = 0; i < N; ++i)
        suma += m[i][i];
    cout << "\nSuma elementow na przekatnej: " << suma << endl;

    return 0;
}