#include <stdio.h>
#include <stdlib.h>

void izpisi(int *STEVILKE, int vsota, int n){
    int temp = 0;
    printf("{{");
    for(int i=0;i<n;i++){
        if(temp + STEVILKE[i] <= vsota){
            printf("%d",STEVILKE[i]);
            temp += STEVILKE[i];
            if(temp != vsota){
                printf(", ");
            }
        }
        else{
            printf("}, {%d",STEVILKE[i]);
            temp = STEVILKE[i];
            if(temp != vsota){
                printf(", ");
            }
        }
    }
    printf("}}\n");
}

void razbijanje(int *M, int n, int k, int *STEVILKE, int vsota, int l, int temp, int *obiskano, int prejsna){
    if(n==l){
        int prva = STEVILKE[0];
        int temp2 = prva;
        for(int i = 1; i < l; i++){
            if(temp2 + STEVILKE[i] <= vsota){
                temp2 += STEVILKE[i];
            }else{
                if(STEVILKE[i] < prva){
                    return;
                }
                prva = STEVILKE[i];
                temp2 = prva;
            }
        }
        izpisi(STEVILKE, vsota,n);
        return;
    }
    if(temp == vsota){
        temp = 0;
    }
    
    for(int i = 1; i < n; i++){
        if(obiskano[i] == 1){
            continue;
        }
        if(temp + M[i] <= vsota){
            if(temp != 0){
                if(M[i] < prejsna){
                    continue;
                }
            }
            STEVILKE[l] = M[i];
            obiskano[i] = 1;
            razbijanje(M,n,k,STEVILKE,vsota,l+1,temp+M[i], obiskano, M[i]);
            obiskano[i] = 0;

        }
    }
    return;
}


int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int *M = (int*)malloc(n*sizeof(int));
    int *stevilke = (int*)calloc(n,sizeof(int));
    int *obiskano = (int*)calloc(n,sizeof(int));
    int vsota = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&M[i]);
        vsota += M[i];
    }
    int razbitje = vsota/k;
    stevilke[0] = M[0];

    razbijanje(M,n,k,stevilke,razbitje,1, M[0], obiskano, M[0]);
    return 0;
}