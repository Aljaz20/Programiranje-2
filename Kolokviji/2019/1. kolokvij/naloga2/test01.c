
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

void izpisiTabelo(int* t, int n) {
    printf("[");
    for (int i = 0;  i < n;  i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", t[i]);
    }
    printf("]\n");
}

int __main__() {
    int naj = 123456789;
    int* t = skladnost("t", "to je torkova tortna tortura", &naj);
    if (t != NULL) {
        izpisiTabelo(t, 28);
        free(t);
    }

    exit(0);
    return 0;
}
