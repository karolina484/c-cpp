/* Karolina Wrzalik
14.04.2025 */

#include <iostream>
#include <vector>

using namespace std;
   
int main() {

    const int N = 5;
    vector<vector<int>> a(N, vector<int>(N));
    vector<vector<int>> b(N, vector<int>(N));
   
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            a[i][j] = j + 1;
        }
    }
   
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            b[j][i] = a[i][j];
        }
    }
   
    cout << "Tablica a:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
   
    cout << "\nTablica b (po zamianie):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << b[i][j] << ' ';
        cout << '\n';
    }
   
    return 0;
}  