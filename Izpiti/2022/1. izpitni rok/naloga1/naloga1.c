
/*
Ro"cno poganjanje testnih programov (npr. test01.c):

gcc -Dtest test01.c naloga1.c
./a.out

Samodejno testiranje:

export name=naloga1
make test

Testni primeri:

test01: primer iz besedila
test02..test08: ro"cno izdelani kratki testi
test09..test11: samodejno izdelani, tip Exxx_Exxx_Exxx_...
test12..test14: samodejno izdelani, vsakemu E-ju sledi "stevilo iz [100, 999]
test15..test17: samodejno izdelani, splo"sni

.c: testni program (prebere testne podatke, pokli"ce va"so funkcijo in izpi"se rezultat)
.dat: testni podatki
.out: pri"cakovani izhod
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

//============================================================================

int sestEj(char* niz) {
    int vsota = 0;
    for(int i = 1; niz[i] != '\0'; i++){
        int stevilka = 0;
        if(niz[i-1] != 'E'){
            continue;
        }
        if(niz[i] < 49 || niz[i] > 58){
            continue;
        }
        for(int j = 0; j < 3; j++){
            if(niz[i+j] == '\0' || niz[i+j] < 48 || niz[i+j] > 58 ){
                stevilka = 0;
                break;
            }
            stevilka = stevilka*10 + (int)(niz[i+j] - '0');
        }
        if(stevilka == 0){
            continue;
        }
        i += 2;
        if(niz[i+1] != '_'){
            continue;
        }
        vsota += stevilka;

    }

    return vsota;
}

//============================================================================

// Vrstici z #ifndef in #endif pustite pri miru!

#ifndef test

int main() {
    // Tole dopolnite, "ce "zelite funkcijo testirati s svojimi lastnimi nizi.
    return 0;
}

#endif
