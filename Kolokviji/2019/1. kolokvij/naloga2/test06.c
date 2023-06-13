
#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

int __main__() {
    int naj = 123456789;
    int* t = skladnost("tortilja", "to je torkova tortna tortura", &naj);
    printf("%d\n", naj);
    if (t != NULL) {
        free(t);
    }

    exit(0);
    return 0;
}
