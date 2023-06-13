
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
    Vozlisce* seznam = zgradi((int[]) {4, 4, 2, 15, 14, 19, 6, 16, 13, 12, 5, 17, 19, 19, 7, 9, 10, 13, 1, 6, 17, 10, 18, 18, 8, 11, 13, 2, 19, 8, 19, 11, 8, 19, 14, 19, 7, 1, 12, 27, 9, 2, 4, 10, 19, 7, 13, 10, 20, 7, 4, 20, 19, 8, 19, 2, 8, 2, 13, 8, 8, 12, 3, 8, 10, 5, 11, 21, 15, 1, 1, 10, 3, 4, 15, 3, 1, 1, 15, 16, 10, 9, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
