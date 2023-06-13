
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
    Vozlisce* seznam = zgradi((int[]) {15, 13, 5, 19, 15, 20, 17, 19, 4, 19, 13, 18, 11, 18, 13, 11, 4, 3, 2, 13, 15, 10, 13, 12, 12, 3, 11, 2, 17, 19, 8, 4, 10, 2, 11, 20, 7, 6, 7, 14, 16, 1, 13, 3, 8, 12, 11, 9, 19, 2, 3, 9, 6, 15, 2, 15, 3, 21, 5, 6, 8, 3, 14, 10, 11, 4, 14, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
