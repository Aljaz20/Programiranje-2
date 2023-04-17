
/*
 * Va"sa re"sitev prve naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga1.h"

char* sestavi(Vozlisce* zacetek) {
    Vozlisce* vozlisce = zacetek;
    int dolzina = 0;
    while(vozlisce != NULL){
        dolzina++;
        vozlisce = vozlisce->naslednje;
    }
    char* niz = (char*) calloc(dolzina+1, sizeof(char));
    vozlisce = zacetek;
    for(int i = 0; i < dolzina; i++){
        niz[i] = vozlisce->znak;
        vozlisce = vozlisce->naslednje;
    }
    niz[dolzina] = '\0';
    return niz;
}

int main() {
    // po "zelji dodajte kodo za ro"cno testiranje ...
    // add manual testing code if desired ...
    return 0;
}
