/* Karolina Wrzalik
14.04.2025 */

#include <iostream>
#include <cstdlib>
#include <ctime>
   
using namespace std;
   
int main() {

    srand(time(NULL));
   
    const int X = 3;
    const int Y = 4;
    const int Z = 5;
   
    int tab[X][Y][Z];
   
    for (int i = 0; i < X; ++i) {
        for (int j = 0; j < Y; ++j) {
            for (int k = 0; k < Z; ++k) {
                tab[i][j][k] = rand() % 100;  
            }
        }
    }
   
    long long suma = 0;
    for (int i = 0; i < X; ++i) {
        for (int j = 0; j < Y; ++j) {
            for (int k = 0; k < Z; ++k) {
                suma += tab[i][j][k];
            }
        }
    }
   
    cout << "Suma wszystkich elementow tablicy trojwymiarowej: " << suma << endl;
   
    return 0;
} 
