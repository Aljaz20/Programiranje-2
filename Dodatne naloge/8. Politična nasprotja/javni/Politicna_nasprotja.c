#include <stdio.h>

long TAB[21][21][21][4];

long razporeditve(int l, int d, int c, int zadnji){
    if(TAB[l][d][c][zadnji] !=-1){
        return TAB[l][d][c][zadnji];
    }
    if(l+c+d == 0){
        return 1;
    }
    if(zadnji == 1 && l+c== 0){
        return 0;
    }
    if(zadnji == 2 && d+c==0){
        return 0;
    }
    long raz = 0;
    if(zadnji == 1){
        if(l>0){
            raz += razporeditve(l-1, d, c, 1);
        }
    }else if(zadnji == 2){
        if(d>0){
            raz += razporeditve(l, d-1, c, 2);
        }
    }else{
        if(d>0){
            raz += razporeditve(l, d-1, c, 2);
        }
        if(l>0){
            raz += razporeditve(l-1, d, c, 1);
        }
    }
    if(c>0){
        raz += razporeditve(l,d,c-1,3);
    }
    TAB[l][d][c][zadnji] = raz;
    return raz;
}


int main(){
    int l,c,d;
    scanf("%d%d%d", &l, &d, &c);
    for(int i = 0; i <= l; i++){
        for(int j = 0 ; j <= d; j++){
            for(int k = 0; k <= c; k++){
                for(int z = 0; z <4; z++){
                    TAB[i][j][k][z] = -1;
                }
            }
        }
    }
    printf("%ld\n", razporeditve(l,d,c, 0));
    return 0;
}
