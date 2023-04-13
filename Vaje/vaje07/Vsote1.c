#include <stdio.h>
#include <stdbool.h>

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
