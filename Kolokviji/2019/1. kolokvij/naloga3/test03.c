
#include "naloga3.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int __main__() {
    T* t = calloc(1, sizeof(T));

    int r[] = {4, 2, -5, 6, 3, 2, 0};

    memcpy(t->b, r, 7 * sizeof(int));   // 5

    t->d[0] = r;         // 5
    t->d[1] = t->b;      // 0

    t->e = t->d;         // 0

    printf("%d\n", steviloPozitivnih(t));  // 10

    free(t);

    exit(0);
    return 0;
}
