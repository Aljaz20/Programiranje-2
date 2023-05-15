
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga.h"

int vsotaI(Vozlisce* zacetek) {
    int vsota = 0;
    
    while(zacetek != NULL){
        vsota += zacetek->podatek;
        zacetek = zacetek->naslednje;
    }
    return vsota;
}

int vsotaR(Vozlisce* zacetek) {
    if(zacetek == NULL){
        return 0;
    }
    return zacetek->podatek + vsotaR(zacetek->naslednje);
}

Vozlisce* vstaviUrejenoI(Vozlisce* zacetek, int element) {
    Vozlisce* novo = malloc(sizeof(Vozlisce));
    Vozlisce* zac = zacetek;
    novo->podatek = element;
    if(zacetek == NULL || zacetek->podatek > element){
        novo->naslednje = zacetek;
        return novo;
    }
    while(zacetek->naslednje != NULL){
        if(zacetek->naslednje->podatek > element){
            novo->naslednje = zacetek->naslednje;
            zacetek->naslednje = novo;
            return zac;
        }
        zacetek = zacetek->naslednje;
    }
    zacetek->naslednje = novo;
    novo->naslednje = NULL;
    return zac;    
}

Vozlisce* vstaviUrejenoR(Vozlisce* zacetek, int element) {
    if(zacetek == NULL || zacetek->podatek > element){
        Vozlisce* novo = malloc(sizeof(Vozlisce));
        novo->podatek = element;
        novo->naslednje = zacetek;
        return novo;
    }
    zacetek->naslednje = vstaviUrejenoR(zacetek->naslednje, element);
    return zacetek;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}
