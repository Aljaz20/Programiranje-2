
/*
 * Prevajanje in zagon testnega programa testXY.c:
 *
 * gcc -D=test testXY.c naloga3.c
 * ./a.out
 *
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 *
 * Testni primeri:
 * 02, 03: h = 1
 * 04, 05, 06: mesto = 0
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga3.h"

// po potrebi dopolnite ...

Vozlisce* vstaviStolpec(Vozlisce* start, int mesto, int vsebina) {
    Vozlisce* temp = calloc(1, sizeof(Vozlisce));
        temp->vsebina = vsebina;
        temp->desno = NULL;
        temp->dol = NULL;
    if(start == NULL){
        return temp;
    }
    if(mesto == 0){
        Vozlisce* zacetekkkkk = temp;
        for(int i = 1; start != NULL; i++){
            temp->desno = start;
            Vozlisce* temp2 = calloc(1, sizeof(Vozlisce));
            temp2->vsebina = vsebina+i;
            temp2->desno = NULL;
            temp2->dol = NULL;
            if(start->dol == NULL){
                temp2 = NULL;
            }
            temp->dol = temp2;
            temp->desno = start;
            temp = temp2;
            start=start->dol;
        }
        return zacetekkkkk;
    }
    Vozlisce* zacetek = start;
    for(int i = 0; i < mesto-1; i++){
        start=start->desno;
    }
    if(start->desno == NULL){
        for(int i = 1; start != NULL; i++){
            start->desno = temp;
            Vozlisce* temp2 = calloc(1, sizeof(Vozlisce));
            temp2->vsebina = vsebina+i;
            temp2->desno = NULL;
            temp2->dol = NULL;
            if(start->dol == NULL){
                temp2 = NULL;
            }
            temp->dol = temp2;
            temp = temp2;
            start=start->dol;
        }
    }else{
        for(int i = 1; start != NULL; i++){
            Vozlisce* desnooo = start->desno;
            start->desno = temp;
            temp->desno = desnooo;
            Vozlisce* temp2 = calloc(1, sizeof(Vozlisce));
            temp2->vsebina = vsebina+i;
            temp2->desno = NULL;
            temp2->dol = NULL;
            if(start->dol == NULL){
                temp2 = NULL;
            }
            temp->dol = temp2;
            temp = temp2;
            start=start->dol;
        }
    }

    return zacetek;
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo <vstaviStolpec> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga3.c).
    return 0;
}

#endif
