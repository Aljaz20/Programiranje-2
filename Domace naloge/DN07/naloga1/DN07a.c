#include <stdio.h>

int TABELA[1000][2];

int drevo(int vozlisce, int dolzina){
    if(TABELA[vozlisce][0] == 0 && TABELA[vozlisce][1] == 0){
        return 1;
    }else if(TABELA[vozlisce][0] == 0){
        dolzina = drevo(TABELA[vozlisce][1] + vozlisce, dolzina)+1;
    }else if(TABELA[vozlisce][1] == 0){
        dolzina = drevo(TABELA[vozlisce][0] + vozlisce, dolzina)+1;
    }else{
        int dolzina1 = drevo(TABELA[vozlisce][0] + vozlisce, dolzina)+1;
        int dolzina2 = drevo(TABELA[vozlisce][1] + vozlisce, dolzina)+1;
        dolzina = dolzina1 > dolzina2 ? dolzina1 : dolzina2;
    }
    return dolzina;
}


int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d%d", &TABELA[i][0], &TABELA[i][1]);
    }
    printf("%d\n", drevo(0, 0)-1);
    return 0;
}