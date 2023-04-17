
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

int ZAP[25];

int podzaporedje(int n, int* zaporedje, int i, int st){
    if (i >= n) {
        return 0;
    }
    int dolzina = 0;
    for(int a = i; a < n; a++){
        if(zaporedje[a] > st){
            if(ZAP[a] == -1){
                ZAP[a] = podzaporedje(n, zaporedje, a+1, zaporedje[a]) + 1;
            }
            dolzina += ZAP[a];
        }
    }
    return dolzina;
}

int main() {
    int n;
    scanf("%d", &n);
    int* zaporedje = (int*) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &zaporedje[i]);
    }
    for(int i = 0; i< 25; i++){
        ZAP[i] = -1;
    }
    printf("%d\n", podzaporedje(n, zaporedje, 0, 0)+1);
    free(zaporedje);
    return 0;
}
