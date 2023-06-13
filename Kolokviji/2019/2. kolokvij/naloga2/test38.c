
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
    Vozlisce* seznam = zgradi((int[]) {9, 6, 11, 9, 8, 12, 20, 5, 16, 4, 18, 7, 2, 8, 18, 19, 9, 7, 7, 18, 16, 8, 7, 8, 15, 7, 1, 15, 4, 6, 2, 13, 20, 4, 1, 11, 25, 14, 3, 1, 1, 2, 1, 16, 11, 8, 2, 15, 6, 5, 6, 10, 2, 8, 2, 16, 11, 6, 9, 5, 18, 13, 6, 5, 17, 16, 20, 14, 4, 12, 15, 3, 11, 7, 17, 8, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
