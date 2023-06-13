
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"




void izloci(Vozlisce* zacetek)
{
    while(zacetek != NULL){
        int stevilo = zacetek->podatek;
        for(int i = 0; zacetek != NULL && i < stevilo-1; i++){
            zacetek = zacetek->naslednje;
        }
        if(zacetek == NULL || zacetek->naslednje == NULL){
            return;
        }
        zacetek->naslednje = zacetek->naslednje->naslednje;
        zacetek = zacetek->naslednje;
    }
}


int main() 
{
    return 0;
}
