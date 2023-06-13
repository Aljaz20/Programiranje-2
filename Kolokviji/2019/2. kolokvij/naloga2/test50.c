
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

Vozlisce* zgradi(int* t) {
    if (*t <= 0) {
        return NULL;
    }
    Vozlisce* v = malloc(sizeof(Vozlisce));
    v->podatek = *t;
    v->naslednje = zgradi(t + 1);
    return v;
}

void izpisi(Vozlisce* zacetek) {
    printf("[");
    for (Vozlisce* p = zacetek;  p != NULL;  p = p->naslednje) {
        if (p != zacetek) {
            printf(", ");
        }
        printf("%d", p->podatek);
    }
    printf("]\n");
}

void pocisti(Vozlisce* zacetek) {
    if (zacetek != NULL) {
        pocisti(zacetek->naslednje);
        free(zacetek);
    }
}

int __main__() {
    Vozlisce* seznam = zgradi((int[]) {15, 17, 16, 7, 16, 12, 20, 17, 10, 3, 8, 3, 7, 17, 15, 6, 23, 9, 10, 4, 5, 7, 18, 9, 16, 13, 20, 5, 18, 7, 10, 18, 7, 12, 16, 16, 14, 20, 17, 17, 31, 12, 18, 16, 4, 17, 20, 18, 11, 20, 13, 12, 6, 17, 14, 13, 11, 3, 15, 10, 13, 7, 9, 2, 9, 5, 6, 4, 8, 6, 5, 8, 12, 3, 1, 11, 2, 2, 7, 8, 13, 6, 1, 13, 19, 4, 8, 18, 14, 2, 23, 19, 14, 6, 19, 17, 4, 11, 15, 7, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
