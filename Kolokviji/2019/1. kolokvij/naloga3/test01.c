
#include "naloga3.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int __main__() {
    T* t = calloc(1, sizeof(T));

    t->b[0] = -5;    // 2
    t->b[1] = -7;
    t->b[2] = 6;
    t->b[3] = 3;
    t->b[4] = -3;

    t->c = calloc(100, sizeof(int));
    t->c[0] = -5;    // 3
    t->c[1] = -7;
    t->c[2] = 6;
    t->c[3] = 3;
    t->c[4] = -3;
    t->c[5] = 9;

    printf("%d\n", steviloPozitivnih(t));    // 5

    free(t->c);
    free(t);

    exit(0);
    return 0;
}
