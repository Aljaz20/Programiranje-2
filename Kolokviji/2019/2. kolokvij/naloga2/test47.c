
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
    Vozlisce* seznam = zgradi((int[]) {10, 10, 8, 10, 8, 13, 9, 17, 17, 4, 18, 20, 12, 4, 6, 10, 4, 4, 19, 10, 16, 15, 20, 8, 12, 7, 10, 14, 16, 14, 6, 20, 20, 17, 1, 9, 10, 15, 6, 3, 4, 18, 10, 11, 18, 4, 17, 16, 13, 12, 6, 20, 5, 7, 2, 4, 10, 1, 3, 10, 14, 4, 18, 14, 10, 20, 22, 7, 15, 2, 10, 7, 5, 8, 3, 11, 6, 1, 14, 10, 13, 12, 14, 5, 20, 13, 2, 3, 15, 16, 8, 8, 6, 6, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
