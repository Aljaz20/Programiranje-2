
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
    Vozlisce* seznam = zgradi((int[]) {14, 7, 7, 4, 11, 2, 2, 7, 7, 12, 20, 10, 4, 15, 9, 18, 7, 17, 3, 11, 9, 11, 18, 5, 16, 12, 8, 16, 12, 7, 4, 6, 19, 16, 20, 3, 6, 20, 11, 7, 6, 20, 20, 4, 7, 3, 18, 10, 15, 7, 6, 15, 11, 3, 2, 11, 11, 2, 16, 7, 8, 5, 1, 20, 20, 18, 13, 20, -1});
    izpisi(seznam);
    izloci(seznam);
    izpisi(seznam);
    pocisti(seznam);
    exit(0);
    return 0;
}
