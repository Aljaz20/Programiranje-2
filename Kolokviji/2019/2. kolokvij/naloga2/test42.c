
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
    Vozlisce* seznam = zgradi((int[]) {2, 15, 8, 10, 18, 1, 11, 10, 1, 6, 1, 17, 19, 11, 9, 2, 17, 15, 6, 3, 15, 3, 2, 12, 23, 2, 8, 1, 1, 17, 5, 3, 5, 6, 8, 16, 16, 18, 15, 5, 13, 13, 12, 14, 4, 7, 9, 4, 5, 20, 15, 2, 13, 16, 10, 6, 8, 17, 17, 3, 14, 16, 12, 20, 15, 23, 13, 17, 11, 13, 4, 5, 11, 2, 11, 15, 11, 15, 18, 9, 19, 13, 10, 4, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
