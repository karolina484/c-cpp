/* Karolina Wrzalik
28.04.2025 */

#include <iostream>
using namespace std;

int main() {

    char *wskchar = new char[10];
    int  *wskint  = new int[3];

    cout << "Zawartosc wskchar: \"" << wskchar << "\"" << endl;

    cout << "Zawartosc wskint:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "wskint[" << i << "] = " << wskint[i] << endl;
    }

    {
        const char *słowo = "Microsoft";
        for (int i = 0; i < 10; i++) {
            wskchar[i] = słowo[i];
        }
        cout << "Po wpisaniu slowa Microsoft do pierwszego obszaru: \"" << wskchar << "\"" << endl;
    }

    {
        for (int i = 0; i < 3; i++) {
            wskint[i] = i + 1;
        }
        cout << "Po wpisaniu wartosci do drugiego obszaru:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "wskint[" << i << "] = " << wskint[i] << endl;
        }
    }

    delete[] wskchar;
    delete[] wskint;

    return 0;
}
