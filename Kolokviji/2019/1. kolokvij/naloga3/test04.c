
#include "naloga3.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int __main__() {
    T* t = calloc(1, sizeof(T));

    t->b[0] = 10;          // 3
    t->b[1] = 20;
    t->b[2] = -11;
    t->b[3] = 30;

    t->c = calloc(10, sizeof(int));     // 1
    t->c[0] = -6;
    t->c[1] = 11;
    t->c[2] = -42;

    t->d[0] = (int[]) {5, 6, -2, -4, 0};     // 2
    t->d[1] = malloc(10 * sizeof(int));     // 3
    t->d[1][0] = 25;
    t->d[1][1] = 6;
    t->d[1][2] = 9;
    t->d[1][3] = 0;

    t->e = calloc(6, sizeof(int*));         // 25
    for (int i = 0;  i < 5;  i++) {
        t->e[i] = calloc(6, sizeof(int));
        for (int j = 0;  j < 5;  j++) {
            t->e[i][j] = 1;
        }
    }

    t->f = (S[]) {{7}, {9}, {-4}, {6}, {-3}, {7}, {0}};  // 4

    t->g = calloc(6, sizeof(S*));
    t->g[0] = (S[]) {{0}};              // 0
    t->g[1] = malloc(30 * sizeof(S));   // 2
    t->g[1][0].a = 15;
    t->g[1][1].a = -6;
    t->g[1][2].a = 8;
    t->g[1][3].a = 0;

    printf("%d\n", steviloPozitivnih(t));  // 40

    free(t->c);
    free(t->d[1]);
    for (int i = 0;  i < 5;  i++) {
        free(t->e[i]);
    }
    free(t->e);
    free(t->g[1]);
    free(t->g);
    free(t);

    exit(0);
    return 0;
}
