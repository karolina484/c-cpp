/* Karolina Wrzalik
19.05.2025 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
    string filename;
    cout << "Podaj nazwe pliku: ";
    cin >> filename;

    ifstream infile(filename.c_str());
    if (!infile) {
        cerr << "Nie mozna otworzyc pliku\n";
        return EXIT_FAILURE;
    }

    size_t count = 0;
    string temp;
    while (getline(infile, temp)) {
        ++count;
    }

    infile.clear();
    infile.seekg(0);

    char **lines = new char*[count];

    size_t index = 0;
    while (getline(infile, temp)) {
        lines[index] = new char[temp.size() + 1];
        strcpy(lines[index], temp.c_str());
        ++index;
    }
    infile.close();

    cout << "Wczytane wiersze:\n";
    for (size_t i = 0; i < count; ++i) {
        cout << lines[i] << "\n";
    }

    for (size_t i = 0; i < count; ++i) {
        delete [] lines[i];
    }
    delete [] lines;

    return EXIT_SUCCESS;
}