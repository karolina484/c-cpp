/* Karolina Wrzalik
28.04.2025 */

#include <iostream>
using namespace std;

int main() {

    char m[6] = {'C','i','s','c','o','\0'}; // trzeba dodac miejsce na znak '\0'
    //char m[] = "Cisco";
    char *p = m;

    while (*p != '\0') {
        cout << *p;
        ++p;
    }
    cout << endl;

    return 0;
}
