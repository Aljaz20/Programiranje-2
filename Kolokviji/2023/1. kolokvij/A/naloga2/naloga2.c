
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
 *
 * Javni testni primeri (po te"zavnosti):
 * -- 02, 03, 04: en sam vhodni niz;
 * -- 05, 06, 07: vsi vhodni nizi so enako dolgi;
 * -- 01, 08, 09, 10: splo"sni primeri.
 *
 * Javni testni primeri (po na"cinu priprave):
 * -- 01: primer iz besedila;
 * -- 01, 02, 05: ro"cno ustvarjeni;
 * -- ostali: samodejno generirani.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...

//=============================================================================

char** poStolpcih(char** nizi, int stVhodnih, int* stIzhodnih) {
    int najdolzina=0;
    int* dol=(int*)malloc(stVhodnih* sizeof(int));
    for(int i =0; i < stVhodnih; i++){
        int dd=0;
        while(nizi[i][dd] != '\0'){
            dd++;
        }
        dol[i]=dd;
        najdolzina = najdolzina > dd? najdolzina : dd;
    }
    *stIzhodnih = najdolzina;
    char** tab=(char**)malloc(najdolzina* sizeof(char*));
    for(int i = 0; i < najdolzina; i++){
        int dd=0;
        for(int j = 0; j < stVhodnih; j++){
            if(dol[j] > i){
                dd++;
            }
        }
        tab[i]=(char*)malloc((dd+1)* sizeof(char));
        int l=0;
        for(int j = 0; j < stVhodnih; j++){
            if(dol[j] > i){
                tab[i][l] = nizi[j][i];
                l++;
            }
        }
        tab[i][dd] = '\0';
    }
    return tab;
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo poStolpcih testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
