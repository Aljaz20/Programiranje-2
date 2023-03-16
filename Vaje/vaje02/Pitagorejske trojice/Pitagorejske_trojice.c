#include <stdio.h>

int main(){
    int count = 0;
    int br = 1;
    int start;
    int konec;
    scanf("%d", &start);
    scanf("%d", &konec);
    for(int l = start; l <= konec; l++){
        br = 1;
        for(int i = 1; i < konec; i ++){
            for(int j = 1; j < konec; j++){
                if(l*l == i*i + j*j){
                    br = 0;
                    count++;
                    printf("%d %d %d\n", l,j,i);
                    break;
                }
            }
            if(br == 0){
            break;
            }
        
        }
    }

    printf("%d", count);
    
    return 0;
}