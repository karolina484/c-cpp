/* 31.03.2025
Karolina Wrzalik */

#include <stdio.h>

int main(void) {
    int x = 10;
    const int ILE = 2;

    for (int i = 0; i < x; i = i + ILE) {
        printf("i = %d\n", i);
    }

    return 0;
}

/* 
Kompilator: gcc (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0

kompilacja gcc zad13.c powiodła się

kompilacja gcc zad13.c -std=c89 nie powiodła się, błąd: ‘for’ loop initial declarations are only allowed in C99 or C11 mode

kompilacja gcc zad13.c -std=c99 powiodła się

Oznacza to, że w wersji języka C89 nie można zainicjalizować licznika w sekcji sterującej pętli for. Program nie skompiluje się.
W nowszych wersjach jest to dozwolone i program kompiluje się.
*/