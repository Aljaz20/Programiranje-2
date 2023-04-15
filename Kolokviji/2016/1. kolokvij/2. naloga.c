#include <stdio.h>

long g(int k, int n){
    if(n < k){
        return 0;
    }
    long rez = k -1;
    int count = 1;
    while(count <= k){
        rez += g(k,n-count);
        count++;        
    }
    return rez;
}

int main(){
    int k,n;
    scanf("%d%d", &k, &n);
    printf("%ld\n", g(k, n));
    return 0;
}