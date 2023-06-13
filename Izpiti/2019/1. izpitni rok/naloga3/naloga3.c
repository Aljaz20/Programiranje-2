#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

long VISINE[100][100];
int prehojeno[100][100];

long gorovja(int n, int visina){
    if(prehojeno[n][visina] != 0){
        return VISINE[n][visina];
    }
    if(visina < 0 || n < visina){
        return 0;
    }
    VISINE[n][visina] = gorovja(n-1, visina+1) + gorovja(n-1, visina-1);
    prehojeno[n][visina] = 1;
    return VISINE[n][visina];
}
 
int main() 
{
    int stevilo;
    scanf("%d\n", &stevilo);
    VISINE[0][0] = 1;
    prehojeno[0][0] = 1;
    printf("%ld\n", gorovja(stevilo, 0));
    
    return 0;
}
