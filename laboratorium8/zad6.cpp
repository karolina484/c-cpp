/* Karolina Wrzalik
19.05.2025 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Podaj nazwe pliku: ";
    cin  >> filename;

    ofstream outfile(filename);
    if (!outfile) {
        cerr << "Blad: nie mozna otworzyc pliku do zapisu\n";
        return 1;
    }
    for (int i = 1; i <= 10; ++i) {
        outfile << (i * i) << '\n';
    }
    outfile.close();

    ifstream infile(filename);
    if (!infile) {
        cerr << "Blad: nie mozna otworzyc pliku do odczytu\n";
        return 1;
    }

    string line;
    cout << "\nZawartosc pliku \"" << filename << "\":\n";
    while (getline(infile, line)) {
        cout << line << '\n';
    }
    infile.close();

    return 0;
}