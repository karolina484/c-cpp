/* Karolina Wrzalik
28.04.2025 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char *wskchar = (char*) malloc(10 * sizeof(char));
    int  *wskint  = (int*)  malloc(3  * sizeof(int));

    printf("Zawartosc wskchar: \"%s\"\n", wskchar);

    printf("Zawartosc wskint:\n");
    for (int i = 0; i < 3; i++) {
        printf("wskint[%d] = %d\n", i, wskint[i]);
    }

    {
        const char *słowo = "Microsoft";
        for (int i = 0; i < 10; i++) {
            wskchar[i] = słowo[i];
        }
        printf("Po wpisaniu slowa Microsoft do pierwszego obszaru: \"%s\"\n", wskchar);
    }

    {
        for (int i = 0; i < 3; i++) {
            wskint[i] = i + 1;
        }
        printf("Po wpisaniu wartosci do drugiego obszaru:\n");
        for (int i = 0; i < 3; i++) {
            printf("wskint[%d] = %d\n", i, wskint[i]);
        }
    }

    free(wskchar);
    free(wskint);

    return 0;
}
