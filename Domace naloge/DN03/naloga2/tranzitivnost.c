
/*

Prevajanje in poganjanje:

gcc -o test01 test01.c tranzitivnost.c -lm
./test01

*/

#include <stdio.h>
#include <stdbool.h>

#include "tranzitivnost.h"

int tranzitivna(int a, int b){
    for(int i = a; i <= b; i++){
        for(int j = a; j <= b; j++){
            for(int k = a; k <=b; k++){
                if(f(i,j) == true && f(j,k) == true){
                    if(f(i,k) == false){
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int antitranzitivna(int a, int b){
    for(int i = a; i <= b; i++){
        for(int j = a; j <= b; j++){
            for(int k = a; k <=b; k++){
                if(f(i,j) == true && f(j,k) == true){
                    if(f(i,k) == true){
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int tranzitivnost(int a, int b) {
    if(tranzitivna(a,b) == 1 && antitranzitivna(a,b)== 1){
        return 1;
    }else if(tranzitivna(a,b) == 1){
        return 2;
    }else if(antitranzitivna(a,b) == 1){
        return 3;
    }
    return 4;
}



// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
