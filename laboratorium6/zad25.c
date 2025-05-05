/* Karolina Wrzalik
28.04.2025 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int tab[5] = {1, 2, 3, 4, 5};
    int *buf = (int*) malloc(5 * sizeof(int));

    int i;

    for (i = 0; i < 5; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", buf[i]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        buf[i] = tab[i];
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", buf[i]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        buf[i]++;
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", buf[i]);
    }
    printf("\n");

    free(buf);

    return 0;
}
