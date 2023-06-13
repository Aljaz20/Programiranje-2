#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main() 
{
    char* vhod = calloc(100, sizeof(char));
    char* izhod = calloc(100, sizeof(char));
    scanf("%s\n", vhod);
    scanf("%s\n", izhod);


    FILE *vhodna = fopen(vhod, "r");
    FILE *izhodna = fopen(izhod, "w");
    
    int max = 0;
    int trenutna = 0;
    char a = 'a';

    while(fread(&a, sizeof(char), 1, vhodna) == 1){
        if(a == '\n'){
            if(trenutna > max){
                max = trenutna;
            }
            trenutna = 0;
            continue;
        }
        if(a == ' '){
            trenutna++;
            continue;
        }
    }
    if(trenutna > max){
        max = trenutna;
    }
    max++;
    fprintf(izhodna, "%d\n", max);
    fclose(vhodna);
    fclose(izhodna);
    return 0;
}
