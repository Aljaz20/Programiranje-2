
#include "naloga3.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int __main__() {
    T* t = calloc(1, sizeof(T));

    memcpy(t->b, (int[]) {-1, 1, -1}, 3 * sizeof(int));    // 1

    t->c = (int[]) {1, -1, 1, -1, 0, 0};   // 2

    t->d[0] = (int[]) {-1, 1, -1, -1, 1, 1, 1, 0, 0, 0};    // 4
    t->d[1] = t->d[0];     // 0
    t->d[2] = t->b;        // 0
    t->d[3] = t->c + 2;    // 0

    t->e = calloc(N, sizeof(int*));
    t->e[0] = (int[]) {1, -1, 1, 1, 0};    // 3
    t->e[1] = t->d[0] + 5;    // 0
    t->e[2] = t->b + 1;       // 0

    S* s = (S[]) {{1}, {1}, {-1}, {-1}, {1}, {1}, {1}, {0}};

    t->f = s + 2;    // 3

    t->g = calloc(N, sizeof(S*));
    t->g[0] = s + 1;  // 1
    t->g[1] = s;      // 1

    printf("%d\n", steviloPozitivnih(t));   // 15

    free(t->g);
    free(t->e);
    free(t);

    exit(0);
    return 0;
}
