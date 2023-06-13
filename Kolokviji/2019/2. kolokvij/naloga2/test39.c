
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
    Vozlisce* seznam = zgradi((int[]) {22, 20, 20, 7, 10, 3, 16, 3, 2, 15, 4, 8, 7, 10, 2, 20, 12, 11, 11, 16, 1, 12, 3, 4, 13, 16, 2, 2, 5, 15, 1, 8, 9, 15, 10, 10, 1, 20, 5, 13, 11, 20, 15, 9, 2, 4, 20, 6, 18, 14, 8, 2, 3, 9, 4, 14, 1, 2, 15, 12, 14, 12, 13, 12, 6, 5, 15, 16, 17, 10, 5, 5, 1, 20, 13, 11, 19, 10, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
