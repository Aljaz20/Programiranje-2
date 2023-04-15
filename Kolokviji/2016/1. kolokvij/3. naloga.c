#include <stdio.h>

int popravilih(int stevilo){
    int delitelji = 0;
    for(int i = 2; i < stevilo; i++){
        if(stevilo % i == 0){
            delitelji++;
        }
    }
    if(delitelji == 4){
        return 1;
    }
    return 0;
}

int main(){
    int tabela[5] = {0,0,0,0,0};
    int stevilo;
    scanf("%d", &stevilo);
    while(stevilo != 0){
        if(popravilih(stevilo) == 1){
            int indeks = 4;
            while(indeks >= 0 && tabela[indeks] < stevilo){
                indeks--;
            }
            for(int i = 4; i > indeks; i--){
                if(i == indeks+1){
                    tabela[i] = stevilo;
                }else{
                    tabela[i] = tabela[i-1];
                }
            }
        }
        scanf("%d", &stevilo);
    }
    printf("%d\n", tabela[4]);
    return 0;
}