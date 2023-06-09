
/*
Ro"cno poganjanje testnih programov (npr. test01.c):

gcc -Dtest test01.c naloga2.c
./a.out

Samodejno testiranje:

export name=naloga2
make test

Testni primeri:

test01: primer iz besedila
test02..test07: ro"cno izdelani kratki testi
test08..test09: samodejno izdelani, n = 1
test10..test17: samodejno izdelani, n > 1

.c: testni program (prebere testne podatke, pokli"ce va"so funkcijo in izpi"se rezultat)
.dat: testni podatki
.out: pri"cakovani izhod
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#include "naloga2.h"

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

//============================================================================

Vozlisce** tabelaSeznamov(int* t, int d, int n) {
    int potenca = 1;
    Vozlisce** tabela = calloc(n, sizeof(Vozlisce*));
    for(int i = 0; i < n; i++){
        Vozlisce* temp = malloc(sizeof(Vozlisce));
        temp->vTabelo = &t[potenca - 1];
        temp->naslednje = NULL;
        tabela[i] = temp;
        for(int j = 2*potenca -1; j < d; j=j+potenca){
            Vozlisce* temp2 = malloc(sizeof(Vozlisce));
            temp2->vTabelo = &t[j];
            
            temp2->naslednje = NULL;
            temp->naslednje = temp2;
            temp = temp2;

        }
        potenca = potenca*2;

    }


    return tabela;   
}

//============================================================================

// Vrstici z #ifndef in #endif pustite pri miru!

#ifndef test

int main() {
    // Tole dopolnite, "ce "zelite funkcijo testirati s svojimi lastnimi
    // podatki.
    return 0;
}

#endif
