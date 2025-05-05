/* Karolina Wrzalik
28.04.2025 */

#include <iostream>
using namespace std;

int main() {
    
    char tab[10] = "Cisco";
    char *p = tab;

    while (*p != '\0') {
        cout << *p;
        ++p;
    }
    cout << endl;

    return 0;
}