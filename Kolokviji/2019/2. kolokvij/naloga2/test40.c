
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
    Vozlisce* seznam = zgradi((int[]) {3, 20, 4, 9, 14, 15, 11, 17, 6, 10, 2, 17, 20, 10, 8, 10, 9, 9, 19, 20, 16, 14, 13, 17, 19, 11, 5, 13, 4, 3, 16, 1, 13, 5, 15, 14, 1, 6, 13, 2, 12, 14, 17, 13, 18, 11, 2, 8, 11, 16, 9, 20, 4, 20, 16, 3, 16, 4, 15, 14, 17, 3, 18, 1, 6, 14, 8, 3, 6, 5, 5, 9, 2, 16, 3, 11, 18, 19, 19, 2, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
