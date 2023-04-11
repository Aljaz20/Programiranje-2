#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Napišite program, ki prebere števili n in k in izpiše vsa padajoča zaporedja števil med 1 in vključno k, katerih vsota znaša n. Uporabi rekurzijo
//Vsako zaporedje izpišite v svoji vrstici, členi zaporedja pa naj bodo med seboj ločeni z zaporedjem presledka, znaka + in presledka.

void izpisi(int t[], int i){
    for(int j=0; j<i; j++){
        printf("%d", t[j]);
        if(j!=i-1){
            printf(" + ");
        }
    }
    printf("\n");
}

long vsote(int n, int k, int t[], int i){
    
    
    if(n==0){
        izpisi(t,i);
        return 1;
    }
    if(n<0 || k==0){
        return 0;
    }
    t[i]=k;
    vsote(n-k,k,t,i+1);
    vsote(n,k-1,t,i);

    
    return 0;
}

int main(){

    long n,k;
    scanf("%ld%ld", &n, &k);
    int *t = malloc(n*sizeof(int));
    vsote(n,k,t,0);
    return 0;
}