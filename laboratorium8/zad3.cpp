/* Karolina Wrzalik
19.05.2025 */

#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2 || argc > 3) {
        cerr << "Uzycie: " << argv[0] << " nazwa_pliku min2\n";
        return EXIT_FAILURE;
    }

    const char *filename = argv[1];
    int min_word_len = 1;
    if (argc == 3 && strcmp(argv[2], "min2") == 0) {
        min_word_len = 2;
    }

    ifstream fp(filename);
    if (!fp.is_open()) {
        cerr << "Nie mozna otworzyc pliku";
        return EXIT_FAILURE;
    }

    long total_chars = 0;
    long uppercase = 0;
    long lowercase  = 0;
    long word_count = 0;
    int c;
    int in_word = 0;
    int current_len = 0;

    while ((c = fp.get()) != EOF) {
        total_chars++;
        if (isupper(c)) uppercase++;
        if (islower(c)) lowercase++;

        if (!isspace(c)) {
            if (!in_word) {
                in_word = 1;
                current_len = 1;
            } else {
                current_len++;
            }
        } else if (in_word) {
            if (current_len >= min_word_len) {
                word_count++;
            }
            in_word = 0;
        }
    }

    if (in_word && current_len >= min_word_len) {
        word_count++;
    }

    fp.close();
    if (fp.bad()) {
        cerr << "Blad przy zamykaniu pliku" << endl;
        return EXIT_FAILURE;
    }

    cout << "Ilosc znakow: " << total_chars << "\n";
    cout << "Ilosc liter duzych: " << uppercase << "\n";
    cout << "Ilosc liter malych: " << lowercase << "\n";
    cout << "Ilosc wyrazow: " << word_count << "\n";

    return EXIT_SUCCESS;
}