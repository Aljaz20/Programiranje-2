
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
    Vozlisce* seznam = zgradi((int[]) {19, 15, 12, 11, 4, 15, 19, 6, 13, 4, 3, 18, 16, 13, 16, 2, 3, 7, 6, 19, 11, 3, 3, 1, 1, 2, 8, 20, 19, 1, 6, 12, 3, 10, 15, 10, 4, 17, 5, 13, 10, 5, 8, 16, 7, 8, 1, 1, 20, 1, 12, 13, 4, 2, 1, 11, 5, 17, 15, 5, 10, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
