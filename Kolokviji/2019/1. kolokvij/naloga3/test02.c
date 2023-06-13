
#include "naloga3.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int __main__() {
    T* t = calloc(1, sizeof(T));

    int r[] = {4, 2, -5, 6, 3, 2, 0};

    memcpy(t->b, r, 7 * sizeof(int));           // 5

    t->c = r;                                   // 5

    t->d[0] = (int[]) {4, 2, -5, 6, 3, 2, 0};   // 5
    t->d[1] = (int[]) {-1, 1, -1, 1, 0};        // 2
    t->d[2] = (int[]) {-1, 1, -1, 1, 0};        // 2

    t->e = calloc(100, sizeof(int*));
    t->e[0] = (int[]) {-1, 1, -1, 1, 0};        // 2
    t->e[1] = malloc(5 * sizeof(int));          // 2
    memcpy(t->e[1], t->e[0], 5 * sizeof(int));
    t->e[2] = calloc(5, sizeof(int));          // 3
    t->e[2][0] = 6;
    t->e[2][1] = -3;
    t->e[2][2] = 4;
    t->e[2][3] = 8;

    printf("%d\n", steviloPozitivnih(t));       // 26

    free(t->e[1]);
    free(t->e[2]);
    free(t->e);
    free(t);

    exit(0);
    return 0;
}
