
/*
Ro"cno poganjanje testnih programov (npr. test01.c):

gcc -Dtest test01.c naloga2.c
./a.out

Samodejno testiranje:

export name=naloga2
make test

Testni primeri:

01: primer iz besedila
02..04: ena sama vrstica
05..06: vsaka neprazna vrstica je naslovna
07..10: splo"sni primeri

Datoteke:

test*.c: testni program (prebere testne podatke, pokli"ce va"so funkcijo in izpi"se rezultat)
test*.dat: testni podatki
test*.out: pri"cakovani izhod testnega programa
test*.res: dejanski izhod testnega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

//============================================================================

void naslovna(Vozlisce* trenutno){
    char *temp = calloc(1050, sizeof(char));
    temp[0] = '<';
    temp[1] = 'h';
    temp[2] = '1';
    temp[3] = '>';
    int i = 0;
    for(i = 0; trenutno->niz[i] != '\0'; i++){
        temp[i+4] = trenutno->niz[i];
        //printf("%d ", i+4);
    }
    i = i + 4;
    //printf("%d\n", i);
    temp[i++] = '<';
    temp[i++] = '/';
    temp[i++] = 'h';
    temp[i++] = '1';
    temp[i++] = '>';
    temp[i++] = '\0';
    for(i = 0; temp[i] != '\0'; i++){
        trenutno->niz[i] = temp[i];
    }
    free(temp);
}

void vstaviH1(Vozlisce* zacetek) {
    char prejsni = '\0';
    while(zacetek != NULL){
        if(prejsni == '\0'){
            if(zacetek->niz[0] != '\0'){
                if(zacetek->naslednje == NULL || zacetek->naslednje->niz[0] == '\0'){
                    naslovna(zacetek);
                }
            }
        }
        prejsni = zacetek->niz[0];
        zacetek=zacetek->naslednje;
    }
}

//============================================================================

// Vrstici z #ifndef in #endif pustite pri miru!

#ifndef test

int main() {
    // Tole dopolnite, "ce "zelite funkcijo lastnoro"cno preveriti.
    // V tem primeru program po"zenite preprosto kot
    // gcc naloga3.c
    // ./a.out
    return 0;
}

#endif
