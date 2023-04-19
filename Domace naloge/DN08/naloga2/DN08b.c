#include <stdio.h>
#include <stdlib.h>

void odstevanje(int n, int k, int poteza, int* tab){   
    if(n <= k){
        for(int i = 0; i < poteza; i++){
            if(i%2 == 0){
                printf("%d -> ", tab[i]);
            }else{
                printf("[%d] -> ", tab[i]);
            }
        }
        printf("%d\n", n);
        return ;
    }
    if(poteza % 2== 0){
            tab[poteza] = n%(k+1);
            odstevanje(n-n%(k+1), k, poteza+1, tab);
        }else{
            for(int i = 1; i <=k ; i++){
                tab[poteza] = i;
                odstevanje(n-i, k, poteza+1, tab);
            }
        }
    return ;
    
}

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    if(n%(k+1)==0){
        printf("CRNI\n");
    }else{
        int* tab = (int*)calloc(n, sizeof(int));
        odstevanje(n, k, 0, tab);
    }
    return 0;
}