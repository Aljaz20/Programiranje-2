#include <stdio.h>
#include <stdbool.h>

//Napišite program, ki prebere števili n in k in izpiše, na koliko načinov lahko število n zapišemo kot vsoto števil med 1 in vključno k. Na primer, pri n “ 7 in k “ 5 imamo 13 načinov. Uporabi rekurzijo
long VS[400][400];
long ZV[400][400];

long vsote(long n, long k){
    
        
        if(ZV[n][k]){
            return VS[n][k];
        }
        if(n==0){
            return 1;
        }
        if(n<0 || k==0){
            return 0;
        }
        
        VS[n][k]=vsote(n-k,k) + vsote(n,k-1);
        ZV[n][k]=true;
        return VS[n][k];
}

int main(){

    long n,k;
    scanf("%ld%ld", &n, &k);
    printf("%ld\n", vsote(n,k));
    return 0;
}