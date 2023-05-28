
/*
Ro"cno poganjanje testnih programov (npr. test01.c):

gcc -Dtest test01.c naloga3.c
./a.out

Samodejno testiranje:

export name=naloga3
make test

Testni primeri:

01: primer iz besedila
02..05: vsi elementi tabele so med seboj enaki
06..10: splo"sni primeri

Testne datoteke:

test*.c: testni program (prebere testne podatke, pokli"ce va"so funkcijo in izpi"se rezultat)
test*.dat: testni podatki
test*.out: pri"cakovani izhod testnega programa
test*.res: dejanski izhod testnega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga3.h"

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

//============================================================================

Vozlisce* dodaj(int n, int*podatki, long indeks){
    Vozlisce* temp = calloc(1,sizeof(Vozlisce));
    temp->podatek = podatki[indeks];
    if(n==1){
        temp->levo = NULL;
        temp->desno = NULL;
        return temp;
    }
    temp->levo = dodaj(n-1, podatki, indeks+1);
    long tt = 1;
    for(int i = 0; i < n-1; i++){
        tt *= 2;
    }
    temp->desno = dodaj(n-1, podatki, indeks+tt);
    return temp;

}

Vozlisce* drevo(int n, int* podatki) {
    long stevilo = 1;
    for(int i = 0; i < n-1; i++){
        stevilo *= 2;
    }
    Vozlisce* temp = calloc(1,sizeof(Vozlisce));
    temp->podatek = podatki[0];
    temp->levo = dodaj(n-1, podatki, 1);
    
    temp->desno = dodaj(n-1, podatki, stevilo);
    return temp;
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
