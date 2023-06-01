
/*
 * Prevajanje in zagon testnega programa testXY.c:
 *
 * gcc -D=test testXY.c naloga2.c
 * ./a.out
 *
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

// po potrebi dopolnite ...

void izlociSkupne(Vozlisce* a, Vozlisce* b, Vozlisce** noviA, Vozlisce** noviB) {
    int *tabela = calloc(1000, sizeof(int));
    int i = 0;
    Vozlisce* tempa = a;
    Vozlisce* tempb = b;
    while(tempb != NULL){
        tempa = a;
        while(tempa != NULL){
            if(tempa->podatek == tempb->podatek){
                tabela[i] = tempa->podatek;
                i++;
            }
            tempa=tempa->naslednje;
        }
        tempb = tempb->naslednje;
    }
   
    tempa = a;
    tempb = b;
    *noviA = NULL;
    *noviB = NULL;
     while (tempa != NULL) {
        int c = 0;
        int found = 0;
        for (c = 0; c < i; c++) {
            if (tempa->podatek == tabela[c]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            if (*noviA == NULL) {
                *noviA = tempa;
                a = tempa;
            } else {
                a->naslednje = tempa;
                a = a->naslednje;
            }
            tempa = tempa->naslednje;
            a->naslednje = NULL;
        } else {
            tempa = tempa->naslednje;
        }
    }
    while (tempb != NULL) {
        int c = 0;
        int found = 0;
        for (c = 0; c < i; c++) {
            if (tempb->podatek == tabela[c]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            if (*noviB == NULL) {
                *noviB = tempb;
                b = tempb;
            } else {
                b->naslednje = tempb;
                b = b->naslednje;
            }
            tempb = tempb->naslednje;
            b->naslednje = NULL;
        } else {
            tempb = tempb->naslednje;
        }
    }
    free(tabela);
        

}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo izlociSkupne testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
