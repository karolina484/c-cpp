/* Karolina Wrzalik
28.04.2025 */

#include <iostream>
using namespace std;

int main() {

    int   a[][2]   = { {1,2}, {3,4}, {5,6}, {7,8}, {9,10}, {11,12} };
    char  b[2][20] = { "Poniedzialek", "Wtorek" };
    char  znaki[]  = "Programowanie";

    int (*pa)[2] = a;
    cout << "Tablica a:" << endl;
    for (int (*wiersz)[2] = pa; wiersz != pa + 6; ++wiersz) {
        int *p = *wiersz;
        cout << *p  << ", " << *(p + 1) << endl;
    }
    cout << endl;

    char (*pb)[20] = b;
    cout << "Tablica b:" << endl;
    for (char (*wiersz2)[20] = pb; wiersz2 != pb + 2; ++wiersz2) {
        char *pc = *wiersz2;
        while (*pc != '\0') {
            cout << *pc;
            ++pc;
        }
        cout << endl;
    }
    cout << endl;

    char *pz = znaki;
    cout << "Tablica znaki:" << endl;
    while (*pz != '\0') {
        cout << *pz;
        ++pz;
    }
    cout << endl;

    return 0;
}