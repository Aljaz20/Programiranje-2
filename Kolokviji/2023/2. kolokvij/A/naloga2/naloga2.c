
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
    int* tabela = calloc(1000, sizeof(int));
    int count = 0;
    Vozlisce* tempa = a;
    Vozlisce* tempb = b;

    while(tempa != NULL){
        tempb = b;
        while(tempb != NULL){
            if(tempa->podatek == tempb->podatek){
                tabela[count] = tempa->podatek;
                count++;
                break;
            }
            tempb = tempb->naslednje;
        }
        tempa=tempa->naslednje;
    }
    *noviA = NULL;
    *noviB = NULL;
    tempa = a;
    tempb = b;

    int prvic = 1;
    int preveri = 0;

    while(tempa != NULL){
        preveri = 0;
        for(int i = 0; i < count; i++){
            if(tempa->podatek == tabela[i]){
                tempa = tempa->naslednje;
                preveri = 1;
                break;
            }
        }
        if(preveri == 1){
            continue;
        }
        if(prvic == 1){
            a = tempa;
            *noviA = tempa;
            prvic = 0;
        }else{
            a->naslednje = tempa;
            a=a->naslednje;
        }
        tempa = tempa->naslednje;
        a->naslednje = NULL;
    }
    prvic = 1;

    while(tempb != NULL){
        preveri = 0;
        for(int i = 0; i < count; i++){
            if(tempb->podatek == tabela[i]){
                tempb = tempb->naslednje;
                preveri = 1;
                break;
            }
        }
        if(preveri == 1){
            continue;
        }
        if(prvic == 1){
            b = tempb;
            
            *noviB = tempb;
            prvic = 0;
        }else{
            b->naslednje = tempb;
            b=b->naslednje;
        }
        tempb = tempb->naslednje;
        b->naslednje = NULL;
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
