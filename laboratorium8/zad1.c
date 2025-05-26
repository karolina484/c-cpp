/* Karolina Wrzalik
19.05.2025 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char filename[256];
    FILE *fp;
    int c;

    printf("Podaj nazwe pliku do odczytu: ");
    if (scanf("%255s", filename) != 1) {
        fprintf(stderr, "Blad wczytywania nazwy pliku.\n");
        return EXIT_FAILURE;
    }

    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Nie mozna otworzyc pliku");
        return EXIT_FAILURE;
    }

    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    if (fclose(fp) != 0) {
        perror("Blad przy zamykaniu pliku");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}