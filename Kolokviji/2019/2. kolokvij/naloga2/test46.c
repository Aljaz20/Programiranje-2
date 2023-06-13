
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
    Vozlisce* seznam = zgradi((int[]) {23, 8, 2, 20, 2, 12, 4, 17, 18, 8, 8, 5, 20, 5, 18, 13, 18, 1, 13, 11, 20, 19, 4, 1, 18, 2, 13, 13, 14, 19, 16, 3, 4, 7, 8, 16, 4, 11, 1, 19, 12, 5, 11, 4, 16, 5, 3, 3, 2, 6, 18, 20, 15, 11, 9, 1, 19, 16, 4, 19, 11, 18, 13, 6, 1, 5, 16, 13, 5, 13, 4, 10, 17, 3, 15, 7, 16, 2, 4, 14, 12, 12, 7, 19, 6, 15, 7, 5, 2, 10, 11, 8, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
