
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

void izlociDuplikate(Vozlisce* zacetek) {
    int** tabela = calloc(1000, sizeof(int*));
    int i = 0;
    int preveri = 1;
    Vozlisce* temp = zacetek;
    
    if(zacetek!=NULL){
        temp = zacetek->naslednje;
        tabela[i] = zacetek->p;
        i++;
        zacetek->naslednje=NULL;
    }
    

    while(temp != NULL){
        preveri = 1;
        for(int a = 0; a < i; a++){
            if(temp->p == tabela[a]){
                preveri = 0;
                break;
            }
        }
        if(preveri == 0){
            temp = temp->naslednje;
            

        }else{
            tabela[i] = temp->p;
            i++;
            
            
            zacetek->naslednje = temp;
            zacetek = temp;
            temp = temp->naslednje;
            zacetek->naslednje = NULL;
            
        }
    }
    

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
