
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {
    FILE *vhod = fopen(argv[1], "r");
    FILE *izhod = fopen(argv[2], "w");

    if(vhod == NULL){
        printf("vhod");
        return 0;
    }
    if(izhod == NULL){
        printf("izhod");
        return 0;
    }

    char temp = 'a';
    char temp2 = 'b';
    while(fread(&temp, sizeof(char), 1, vhod) == 1){
        
        if(temp == '"'){
            if(temp2 == '"'){
                fwrite(&temp2, sizeof(char), 1, izhod);
            }
            temp2 = temp;
            continue;
        }else{
            if(temp2 == '"'){
                if(temp == 'C' || temp == 'c' ||temp == 'S' ||temp == 's' ||temp == 'Z' ||temp == 'z'){
                    
                    fwrite(&temp, sizeof(char), 1, izhod);
                    temp2 = temp;
                    continue;
                }else{
                    fwrite(&temp2, sizeof(char), 1, izhod);
                    fwrite(&temp, sizeof(char), 1, izhod);
                    temp2 = temp;
                    continue;

                }
            }else{
                fwrite(&temp, sizeof(char), 1, izhod);
                temp2 = temp;
                    continue;
            }
        }
        
    }
    fclose(vhod);
    fclose(izhod);

    return 0;
}
