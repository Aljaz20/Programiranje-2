
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
    Vozlisce* seznam = zgradi((int[]) {10, 1, 4, 9, 12, 13, 19, 10, 5, 13, 12, 11, 4, 7, 20, 18, 14, 16, 5, 11, 7, 6, 11, 8, 13, 3, 9, 17, 6, 13, 1, 18, 24, 8, 16, 11, 19, 19, 5, 2, 7, 8, 1, 10, 10, 6, 17, 11, 7, 5, 13, 7, 1, 3, 20, 1, 1, 15, 16, 15, 3, 1, 12, 2, 9, 16, 11, 11, 19, 12, 7, 7, 11, 14, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
