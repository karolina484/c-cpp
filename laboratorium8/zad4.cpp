/* Karolina Wrzalik
19.05.2025 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Podaj nazwe pliku: ";
    cin >> filename;

    ifstream infile(filename);
    if (!infile) {
        cerr << "Blad: nie mozna otworzyc pliku \"" << filename << "\"\n";
        return 1;
    }

    size_t line_count = 0;
    size_t max_length = 0;
    string line;

    while (getline(infile, line)) {
        ++line_count;
        if (line.length() > max_length) {
            max_length = line.length();
        }
    }

    if (infile.bad()) {
        cerr << "Blad podczas odczytu pliku.\n";
        return 1;
    }

    cout << "Liczba wierszy: " << line_count << endl;
    cout << "Maksymalna dlugosc wiersza: " << max_length << endl;

    return 0;
}