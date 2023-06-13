#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char* vhod = calloc(20, sizeof(char));
    char* izhod = calloc(20, sizeof(char));
    scanf("%s\n", vhod);
    scanf("%s\n", izhod);
    char a = 'a';
    scanf("%c", &a);

    FILE *vhodna = fopen(vhod, "r");
    FILE *izhodna = fopen(izhod, "w");


    char *zadnja = calloc(1000, sizeof(char));
    char *temp = calloc(1000, sizeof(char));
    char b = 'a';
    int prestej = 0;
    int preveri = 0;
    
    while(fread(&b, sizeof(char), 1, vhodna) == 1){
        temp[prestej] = b;
        prestej++;
        if(b == '\n'){
            if(preveri == 1){
                free(zadnja);
                zadnja = calloc(prestej-1, sizeof(char));
                for(int i = 0; i < prestej-1; i++){
                    zadnja[i] = temp[i];
                }
                preveri = 0;

            }
            free(temp);
            temp = calloc(1000, sizeof(char));
            prestej = 0;
        }else if(b == a){
            preveri = 1;
        }
    }

    fprintf(izhodna, "%s", zadnja);
    fclose(vhodna);
    fclose(izhodna);
    

    return 0;
}


