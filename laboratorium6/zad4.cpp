/* Karolina Wrzalik
28.04.2025 */

#include <iostream>
using namespace std;

int main() {

    char m[5]   = {'C','i','s','c','o'}; // brakuje miejsca na znak '\0' konczacy napis
    char n[10]  = "Microsoft";
    char *p = m;

    while (*p != '\0') { // petla nie znajdzie w m zadnego '\0', wiec bedzie czytac dalej w glab pamieci
        cout << *p;
        ++p;
    }
    cout << endl;

    return 0;
}