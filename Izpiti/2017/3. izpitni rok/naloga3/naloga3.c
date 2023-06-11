#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() 
{
    char *naslov = calloc(24, sizeof(char));
    scanf("%s", naslov);
    FILE *vhodna = fopen(naslov, "rb");

    char p6[2] = "P6";
    int sirina, visina, maxi;

    fread(&p6, sizeof(char), 2, vhodna);
    fscanf(vhodna, "%d %d\n %d\n", &sirina, &visina, &maxi);
    int skupaj = 0;
    unsigned char R = 0;
    unsigned char G = 0;
    unsigned char B = 0;
    int max = 0;
    int **tabela = calloc(visina*sirina, sizeof(int*));
    int temp = 0;
    int trenutno = 0;

    for(int i = 0; i < visina; i++){
        for(int j = 0; j < sirina; j++){
            fread(&R, sizeof(unsigned char), 1, vhodna);
            fread(&G, sizeof(unsigned char), 1, vhodna);
            fread(&B, sizeof(unsigned char), 1, vhodna);
            skupaj = 1000000 * R + 1000 *G + B;
            int preveri = 0;
            for(int k = 0; k < temp; k++){
                if(tabela[k][0] == skupaj){
                    tabela[k][1] += 1;
                    preveri = 1;
                    trenutno = k;
                    break;
                }
            }
            if(preveri == 0){
                trenutno = temp;
                tabela[temp] = calloc(2, sizeof(int));
                tabela[temp][0] = skupaj;
                tabela[temp][1] = 1;
                temp++;
            }
            if(tabela[trenutno][1] > tabela[max][1]){
                max = trenutno;
            }
        }
    }
    fclose(vhodna);
    
    printf("%d\n%d\n", temp, tabela[max][1]);
    
    return 0;
}
