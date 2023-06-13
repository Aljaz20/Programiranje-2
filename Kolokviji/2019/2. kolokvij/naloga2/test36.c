
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
    Vozlisce* seznam = zgradi((int[]) {4, 9, 17, 7, 12, 14, 9, 15, 1, 9, 16, 2, 10, 20, 1, 11, 19, 13, 14, 17, 6, 5, 11, 19, 14, 4, 18, 18, 7, 10, 4, 19, 1, 7, 20, 9, 12, 13, 14, 12, 2, 9, 7, 4, 14, 14, 14, 8, 6, 11, 9, 8, 16, 4, 9, 1, 1, 12, 10, 19, 15, 15, 20, 10, 20, 9, 8, 13, 16, 10, 9, 19, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
