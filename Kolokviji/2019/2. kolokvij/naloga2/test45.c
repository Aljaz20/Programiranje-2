
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
    Vozlisce* seznam = zgradi((int[]) {7, 17, 2, 10, 14, 7, 14, 8, 5, 14, 14, 7, 1, 13, 4, 5, 7, 14, 19, 29, 6, 14, 4, 5, 5, 14, 7, 9, 18, 7, 11, 10, 5, 15, 18, 13, 10, 17, 7, 13, 20, 6, 11, 8, 3, 5, 18, 1, 18, 14, 12, 12, 6, 16, 14, 7, 8, 18, 7, 4, 4, 9, 20, 17, 9, 6, 4, 14, 1, 1, 15, 7, 6, 8, 8, 1, 10, 20, 19, 3, 1, 17, 6, 24, 16, 16, 1, 18, 5, 8, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
