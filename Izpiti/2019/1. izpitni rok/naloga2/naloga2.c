#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"


Vozlisce* obrni(Vozlisce* zacetek) 
{
    int *seznam = calloc(1000, sizeof(int));
    int i = 0;
    if(zacetek == NULL || zacetek->naslednje == NULL){
        return zacetek;
    }
    while(zacetek != NULL){
        seznam[i] = zacetek->podatek;
        zacetek = zacetek->naslednje;
        i++;
    }
    Vozlisce* obratno = calloc(1, sizeof(Vozlisce));
    obratno->podatek = seznam[--i];
    obratno->naslednje = NULL;
    Vozlisce* prejsne = obratno;
    while(i > 0){
        Vozlisce* novo = calloc(1, sizeof(Vozlisce));
        novo->podatek = seznam[--i];
        novo->naslednje = NULL;
        prejsne->naslednje = novo;
        prejsne = novo;
    }
    

    return obratno;
}


int main() 
{
    return 0;
}


