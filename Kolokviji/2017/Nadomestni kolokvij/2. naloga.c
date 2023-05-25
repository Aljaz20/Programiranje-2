#include <stdio.h>
#include <stdlib.h>
#include "2.naloga.h"

int odd(Niz* kazalec){
    if(kazalec == NULL){
        return 0;
    }
    if(kazalec->naslednji == NULL){
        return 1;
    }
    return odd(kazalec->naslednji->naslednji);
}

int main(){
    return 0;
}

