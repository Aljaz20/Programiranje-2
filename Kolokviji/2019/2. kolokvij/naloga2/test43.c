
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
    Vozlisce* seznam = zgradi((int[]) {10, 7, 19, 12, 5, 8, 12, 14, 11, 2, 19, 15, 8, 10, 9, 6, 5, 4, 5, 19, 12, 14, 13, 16, 19, 10, 13, 14, 4, 17, 10, 13, 1, 3, 17, 19, 2, 6, 10, 5, 19, 7, 21, 11, 7, 9, 7, 15, 15, 19, 2, 12, 16, 5, 20, 10, 3, 1, 1, 9, 3, 5, 2, 1, 21, 3, 10, 20, 10, 9, 7, 14, 11, 9, 15, 14, 3, 19, 19, 3, 6, 18, 9, 9, 8, 1, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
