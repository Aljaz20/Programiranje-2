#include <stdio.h>

int main(){
    int n,k;
    scanf("%d", &n);
    scanf("%d", &k);
    long stevilo = 0;
    int d = n;
    if(n>1000000){
        d = 1000000;
    }
    int tab[d][2];
    scanf("%d", &tab[0][0]);
    tab[0][1] = 1;
    int jj = 0;
    for(int i = 1; i < n; i++){
        int temp;
        scanf("%d", &temp);
        if(temp == tab[jj][0]){
            tab[jj][1]++;
        }else{
            jj++;
            tab[jj][0] = temp;
            tab[jj][1] = 1;
        }
    }

    for(int j = 0; j <= jj; j++){
        if(tab[j][0]*2 == k){
            for(int l = tab[j][1] -1; l > 0; l--){
                stevilo += l;
            }
            break;
        }
        for(int g = jj; g > j; g--){
            if(tab[j][0] + tab[g][0] == k){
                stevilo += (long)tab[j][1] * (long)tab[g][1];
            }else if(tab[j][0] + tab[g][0] < k){
                break;
            }
        }
    }
   

    printf("%ld", stevilo);

    return 0;
}