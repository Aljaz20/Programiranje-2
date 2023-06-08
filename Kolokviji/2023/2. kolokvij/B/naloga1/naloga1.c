
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {
    FILE *vhodna = fopen(argv[1], "rb");
    FILE *izhodna = fopen(argv[2], "wb");

    unsigned char znak = '\n';

    while(true){
        if(znak == '\n'){
            while(true){
                if(fread(&znak, sizeof(unsigned char), 1, vhodna) == 1){
                    if(znak == ' '){
                        continue;
                    }else{
                        fwrite(&znak, sizeof(unsigned char), 1, izhodna);
                        break;
                    }
                }else{
                    fclose(vhodna);
                    fclose(izhodna);
                    exit(0);
                }
            }
        }
        while(true){ 
            if(znak == '\n'){
                break;
            }
            if(fread(&znak, sizeof(unsigned char), 1, vhodna) == 1){
                fwrite(&znak, sizeof(unsigned char), 1, izhodna);
            }else{
                fclose(vhodna);
                fclose(izhodna);
                exit(0);
            }

            
            
        }
    }

    fclose(vhodna);
    fclose(izhodna);

    return 0;
}
