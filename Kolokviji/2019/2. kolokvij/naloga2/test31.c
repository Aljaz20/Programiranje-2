
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
    Vozlisce* seznam = zgradi((int[]) {2, 17, 10, 18, 18, 12, 2, 12, 15, 19, 18, 16, 5, 3, 19, 18, 9, 17, 19, 19, 11, 12, 18, 9, 15, 13, 18, 18, 12, 18, 9, 4, 9, 16, 8, 4, 7, 5, 8, 20, 20, 6, 11, 7, 15, 15, 6, 3, 19, 4, 15, 9, 12, 4, 1, 15, 5, 8, 9, 13, 12, 15, 20, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
