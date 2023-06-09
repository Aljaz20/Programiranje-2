
/*
 * Va"sa re"sitev tretje naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 3 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int TAB[1000001];
int count;

int prestej(int a, int b, int n){
    if(TAB[n] != 0){
        return TAB[n];
    }
    count++;
    if(n==0){
        TAB[n] = 1;
        return 1;
    }
    
    TAB[n] = prestej(a,b,n/a) + prestej(a,b,n/b);
    return TAB[n];
    
}

int main() {
    int a,b,n;
    scanf("%d %d %d", &a, &b, &n);
    count = 0;
    int vsota = prestej(a,b,n);
    printf("%d", count);

    return 0;
}
