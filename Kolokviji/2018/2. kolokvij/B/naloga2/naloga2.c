
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int prestej(int n, int k){
    if(k == 0){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    int rez = 0;
    if(n > 1){
        rez += prestej(n-2, k-1);
    }else{
        rez += prestej(n-1,k-1);
    }
    rez += prestej(n-1,k);
    return rez;
}

int main() {
    int n,k;
    scanf("%d%d", &n, &k);
    int stevilka = prestej(n,k);
    printf("%d\n", stevilka);
    return 0;
}
