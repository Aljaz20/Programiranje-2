
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
    Vozlisce* seznam = zgradi((int[]) {24, 19, 7, 13, 18, 6, 6, 19, 12, 16, 9, 12, 12, 7, 17, 12, 7, 17, 15, 13, 4, 1, 16, 17, 8, 22, 13, 1, 10, 15, 5, 8, 19, 8, 5, 3, 20, 10, 13, 18, 19, 18, 2, 6, 8, 16, 12, 12, 26, 4, 16, 7, 6, 14, 9, 15, 19, 2, 20, 17, 12, 10, 9, 18, 16, 5, 10, 18, 15, 13, 16, 15, 11, 3, 14, 32, 19, 8, 5, 8, 1, 11, 17, 19, 12, 20, 15, 17, 9, 20, 16, 20, 20, 3, 19, 10, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
