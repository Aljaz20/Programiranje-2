
#include <stdio.h>
#include <stdlib.h>

#include "naloga.h"

int vsota(int* zac, int* kon) {
    int sum = 0;
    while(zac != kon){
        sum += *zac;
        zac++;
    }
    sum += *kon;
    printf("%d", sum);
    return -1;
}

void indeksInKazalec(int* t, int* indeks, int** kazalec) {
    if(*indeks == -1){
        *indeks = (*kazalec - t);
    }else{
        *kazalec = t + *indeks;
    }
}

void frekvenceCrk(char* niz, int** frekvence) {
    int* b = malloc(26 * sizeof(int));
    *frekvence = b;
    int dolzina = 0;
    for (dolzina = 0; niz[dolzina] != '\0'; ++dolzina);

    
    for(int i = 0; i < dolzina; i++){
        int temp = niz[i];
        if(temp < 'a' && temp >= 'A'){
            temp = temp - 'A'; 
            b[temp] = b[temp] + 1;
        }else if(temp >= 'a'){
            temp = temp - 'a';
            b[temp] = b[temp] + 1;
        }
        
    }
}

int main() {

    /*testiranje funckije vsota
    int a[5] = {1,2,3,4,99};
    vsota(&a[0],&a[2]);*/

    return 0;
}
