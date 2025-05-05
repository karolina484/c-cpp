/* Karolina Wrzalik
14.04.2025 */

#include <iostream>

using namespace std;

int main() {

    const int SIZE = 15;
    
    int array[SIZE] = {64, 34, 25, 12, 22, 11, 90, 45, 67, 89, 33, 77, 56, 43, 5};

    cout << "Tablica przed sortowaniem: ";
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE - 1; i++) {

        int min = i;

        for (int j = i + 1; j < SIZE; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }

        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    cout << "Tablica po sortowaniu: ";
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
