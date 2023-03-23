
/*

Prevajanje in poganjanje:

gcc -o test01 test01.c inverz.c -lm
./test01

*/

#include <stdio.h>
#include <stdbool.h>

#include "inverz.h"

long inverz(long x, long a, long b) {
    while(b-a >3){
        long temp = a/2 + b/2;
        if(f(temp) == x){
            return temp;
            break;
        }else if(f(temp) > x){
            b = temp;
        }else{
            a = temp;
        }
    }
    for(long i = a; i <= b; i++){
            if(f(i) == x){
                return i;
            }
    }
    return 0;
}

// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
