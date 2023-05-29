
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

long absolutno(long n){
    if(n<0){
        return -1*n;
    }
    return n;
}

long najmanjsa(int n, int *tab, long vsota1, long vsota2){
    if(n==0){
        return absolutno(vsota1-vsota2);
    }
    long prva = najmanjsa(n-1, tab, vsota1 + tab[n-1], vsota2);
    long druga = najmanjsa(n-1, tab, vsota1, tab[n-1] + vsota2);
    if((prva) > druga){
        
        return (druga);
    }
    return (prva);
}

int main() {
    int n;
    scanf("%d\n", &n);
    long vsota = 0;
    int *tab = malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
        vsota += tab[i];
    }
    printf("%ld\n", najmanjsa(n, tab, 0,0));

    return 0;
}
