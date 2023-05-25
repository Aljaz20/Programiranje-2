
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

int prestej(int n, int k, int v, int trenutni, int* stevilke){
    if(k == 0){
        if(v == 0){
            return 1;
        }
        return 0;
    }
    int rez = 0;
    for(int i = trenutni; i < n; i++){
        rez += prestej(n, k-1, v-stevilke[i], i+1, stevilke);
    }
    return rez;
}

int main() {
    int n,k,v;
    scanf("%d%d%d", &n, &k, &v);
    int* stevilke = calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &stevilke[i]);
    }
    int stevilo = prestej(n,k,v, 0, stevilke);
    printf("%d\n", stevilo);
    return 0;
}
