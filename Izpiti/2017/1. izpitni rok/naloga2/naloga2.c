#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() 
{
    int n, k, t;
    scanf("%d %d %d\n", &n, &k, &t);
    int** seznam = calloc(n, sizeof(int*));
    int temp = 0;
    for(int i = 0; i < n; i++){
        seznam[i] = calloc(k, sizeof(int));
        for(int j = 0; j < k; j++){
            seznam[i][j] = temp;
            temp++;
        }
    }
    int prebrano;
    int vsota = 0;
    for(int i = 0; i < t; i++) {
        scanf("%d", &prebrano);
        int vrsta = prebrano/k;
        int poz = prebrano%k;
        int temp2 = 0;
        for(int j = k-1; j != poz; j--){
            if(seznam[vrsta][j] != -1){
                temp2++;
            }
        }
        vsota += temp2;
        seznam[vrsta][poz] = -1;
    }
    printf("%d", vsota);
    return 0;
}
