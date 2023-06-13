
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
    Vozlisce* seznam = zgradi((int[]) {9, 17, 5, 1, 19, 8, 8, 14, 11, 4, 23, 12, 5, 7, 10, 14, 18, 9, 20, 3, 3, 14, 8, 19, 3, 16, 2, 5, 14, 18, 18, 17, 14, 8, 18, 5, 13, 13, 13, 20, 5, 1, 16, 4, 19, 3, 16, 8, 1, 7, 4, 12, 1, 20, 10, 16, 9, 19, 13, 15, 11, 1, 12, 9, 12, 3, 9, 19, 14, 2, 20, 13, 18, 6, 20, 18, 4, 13, 15, 7, 18, 11, 4, 10, 2, 5, 7, 10, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
