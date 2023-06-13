
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
    Vozlisce* seznam = zgradi((int[]) {4, 3, 10, 6, 20, 18, 2, 10, 6, 19, 1, 19, 14, 10, 7, 9, 3, 2, 14, 10, 18, 2, 2, 12, 7, 17, 19, 12, 4, 17, 3, 7, 9, 10, 6, 11, 11, 17, 1, 13, 4, 8, 3, 1, 3, 14, 17, 2, 16, 15, 11, 1, 9, 5, 6, 7, 8, 15, 18, 5, 14, 3, 8, 17, 2, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
