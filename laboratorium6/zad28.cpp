/* Karolina Wrzalik
28.04.2025 */

#include <iostream>
using namespace std;

int main() {

    int   *p_int[10];
    char  *p_char[3];
    float *p_float[2];


    for (int i = 0; i < 10; ++i) {
        p_int[i] = new int;
    }
    for (int i = 0; i < 3; ++i) {
        p_char[i] = new char;
    }
    for (int i = 0; i < 2; ++i) {
        p_float[i] = new float;
    }

    for (int i = 0; i < 10; ++i) {
        delete p_int[i];
    }

    for (int i = 0; i < 2; ++i) {
        delete p_float[i];
    }

    return 0;
}

// program valgrind pokazuje, ze zgubiono 3 bajty (3 bloki)