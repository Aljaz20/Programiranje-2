
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
    Vozlisce* seznam = zgradi((int[]) {4, 10, 6, 2, 5, 20, 19, 5, 10, 4, 1, 4, 16, 12, 19, 1, 2, 16, 9, 5, 15, 10, 6, 4, 17, 9, 2, 7, 18, 16, 17, 5, 12, 9, 6, 8, 8, 18, 15, 1, 11, 8, 20, 17, 13, 5, 14, 20, 16, 2, 16, 3, 8, 2, 17, 13, 8, 7, 4, 10, 2, 13, 11, 12, 11, 14, 14, 14, 5, 10, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
