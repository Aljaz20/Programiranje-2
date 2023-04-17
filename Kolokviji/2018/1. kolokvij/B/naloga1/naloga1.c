
/*
 * Va"sa re"sitev prve naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int* tab=(int*)calloc(m, sizeof(int));
    int st;
    int noter = 1;
    int prejsna;
    scanf("%d", &prejsna);
    tab[0] = prejsna;
    for(int i = 1; i < m; i++){
        scanf("%d", &st);
        if(st == prejsna){
            continue;
        }else{
            prejsna = st;
            tab[noter] = st;
            noter++;
        }
    }
    int* popravljena = (int*)calloc(noter, sizeof(int));
    for(int i= 0; i < noter; i++){
        popravljena[i] = tab[i];
    }
    free(tab);
    scanf("%d", &n);
    int j = 0;
    prejsna = popravljena[0];
    for(int i = 0; i < n; i++){
        scanf("%d", &st);
        if(st == prejsna){
            continue;
        }
        prejsna = st;
        if(j == noter){
            printf("%d\n", st);
            continue;
        }
        if(st < popravljena[j]){
            printf("%d\n", st);
        }else if(st > popravljena[j]){
            while(j!=noter && popravljena[j] < st){
                printf("%d\n", popravljena[j]);
                j++;
            }
            if(j!= noter && popravljena[j] == st){
                j++;
            }
            printf("%d\n", st);
        }
    }
    while(j != noter){
        printf("%d\n", popravljena[j]);
        j++;
    }
    
    free(popravljena);

    return 0;
}
