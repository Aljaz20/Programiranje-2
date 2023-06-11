#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main() 
{   
    unsigned long stevilo = 0;
    int n;
    scanf("%d", &n);
    int** tabela = calloc(8, sizeof(int*));
    for(int i = 0; i < 8; i++){
        tabela[i] = calloc(8, sizeof(int));
    }
    tabela[7][7] = 1;
    int x = 7;
    int y = 7;
    for(int i = 0; i < n; i++){
        int ukaz;
        scanf("%d", &ukaz);
        if(ukaz == 0){
            if(x > 0){
                x -= 1;
                if(tabela[y][x] == 0){
                    tabela[y][x] = 1;
                }
            }
        }else if(ukaz == 1){
            if(y > 0){
                y -= 1;
                if(tabela[y][x] == 0){
                    tabela[y][x] = 1;
                }
            }
        }else if(ukaz == 2){
            if(x < 7){
                x += 1;
                if(tabela[y][x] == 0){
                    tabela[y][x] = 1;
                }
            }
        }else{
            if(y < 7){
                y += 1;
                if(tabela[y][x] == 0){
                    tabela[y][x] = 1;
                }
            }
        }
    }

    for(int i = 0; i < 8; i++){
        
        for(int j = 0; j < 8; j++){
            stevilo *= 2;
            stevilo += tabela[i][j];
        }
    }

    printf("%lu", stevilo);
    return 0;
}
