
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

Vozlisce* zdesetkaj(Vozlisce* zacetek, int k) {
    if (zacetek == NULL) return NULL;
    if (k == 1) {
        return zacetek;
    }
    Vozlisce* tmp = NULL;
    for(int i = 0; i < k-1; i++){
        if(zacetek->naslednje == NULL){
            return tmp;
        }
        zacetek = zacetek->naslednje;
    }
    tmp = zacetek;
    tmp->naslednje = zdesetkaj(zacetek->naslednje, k);
    return tmp;
      
}
#ifndef test
int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
#endif
