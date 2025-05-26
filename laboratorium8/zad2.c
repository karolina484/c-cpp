/* Karolina Wrzalik
19.05.2025 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2 || argc > 3) {
        fprintf(stderr, "Uzycie: %s nazwa_pliku min2\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *filename = argv[1];
    int min_word_len = 1;
    if (argc == 3 && strcmp(argv[2], "min2") == 0) {
        min_word_len = 2;
    }

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Nie mozna otworzyc pliku");
        return EXIT_FAILURE;
    }

    long total_chars = 0;
    long uppercase = 0;
    long lowercase = 0;
    long word_count = 0;
    int c;
    int in_word = 0;
    int current_len = 0;

    while ((c = fgetc(fp)) != EOF) {
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

    if (fclose(fp) != 0) {
        perror("Blad przy zamykaniu pliku");
        return EXIT_FAILURE;
    }

    printf("Ilosc znakow: %ld\n", total_chars);
    printf("Ilosc liter duzych: %ld\n", uppercase);
    printf("Ilosc liter malych: %ld\n", lowercase);
    printf("Ilosc wyrazow: %ld\n", word_count);

    return EXIT_SUCCESS;
}