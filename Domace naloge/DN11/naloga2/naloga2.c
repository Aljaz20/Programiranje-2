
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int izpisiB(B* b, char* cilj);

int izpisiC(C* c, char* cilj) {
    if (c == NULL) {
        return sprintf(cilj, "NULL");
    }
    
    int count = 0;
    count += sprintf(cilj, "{%s, ", c->r ? "true" : "false");
    
    count += izpisiA(c->a, cilj + count);
    count += sprintf(cilj + count, ", ");
    count += izpisiB(c->b, cilj + count);
    count += sprintf(cilj + count, "}");
    
    return count;
}

int izpisiB(B* b, char* cilj) {
    if (b == NULL) {
        return sprintf(cilj, "NULL");
    }
    
    int count = 0;
    count += sprintf(cilj, "{%s, ", b->q);
    
    count += izpisiC(b->c, cilj + count);
    count += sprintf(cilj + count, "}");
    
    return count;
}

int izpisiA(A* a, char* cilj) {
    if (a == NULL) {
        return sprintf(cilj, "NULL");
    }
    
    int count = 0;
    count += sprintf(cilj, "{%d, ", a->p);
    
    count += izpisiB(a->b, cilj + count);
    count += sprintf(cilj + count, "}");
    
    return count;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
