
#include "naloga3.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int I1[] = {5, -5, 4, -4, 3, -3, 2, -2, 1, -1, 0};
int I2[] = {5, -5, 4, -4, 3, -3, 2, -2, 1, -1, 0};
S S1[] = {{5}, {-5}, {4}, {-4}, {3}, {-3}, {2}, {-2}, {1}, {-1}, {0}};
S S2[] = {{5}, {-5}, {4}, {-4}, {3}, {-3}, {2}, {-2}, {1}, {-1}, {0}};

int __main__() {
    T* t = calloc(1, sizeof(T));

    memcpy(t->b, I1, 11 * sizeof(int));    // 5

    t->c = I1;       // 5

    t->d[0] = I1;    // 0
    t->d[1] = I2;    // 5
    t->d[2] = I1;    // 0
    t->d[3] = I2;    // 0
    t->d[4] = t->b;  // 0
        
    t->e = t->d;     // 0

    t->f = S1;       // 5

    t->g = calloc(6, sizeof(S*));
    t->g[0] = S1;                          // 0
    t->g[1] = malloc(11 * sizeof(S));
    memcpy(t->g[1], S1, 11 * sizeof(S));   // 5
    t->g[2] = S2;                          // 5
    t->g[3] = t->g[0];                     // 0
    t->g[4] = t->g[1];                     // 0

    printf("%d\n", steviloPozitivnih(t));  // 30

    free(t->g[1]);
    free(t->g);
    free(t);

    exit(0);
    return 0;
}
