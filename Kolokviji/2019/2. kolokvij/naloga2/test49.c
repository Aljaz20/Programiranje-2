
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
    Vozlisce* seznam = zgradi((int[]) {6, 19, 8, 5, 9, 4, 17, 24, 11, 3, 12, 4, 9, 11, 16, 8, 2, 16, 15, 18, 19, 14, 17, 6, 1, 4, 7, 7, 5, 18, 6, 19, 22, 11, 3, 7, 18, 18, 1, 12, 3, 1, 8, 7, 5, 5, 16, 16, 15, 20, 20, 16, 7, 14, 10, 2, 15, 16, 18, 19, 14, 20, 3, 10, 5, 6, 20, 7, 11, 20, 2, 14, 14, 12, 2, 9, 20, 25, 4, 9, 12, 6, 15, 17, 18, 10, 8, 3, 5, 11, 19, 17, 13, 2, 4, 5, 3, 16, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
