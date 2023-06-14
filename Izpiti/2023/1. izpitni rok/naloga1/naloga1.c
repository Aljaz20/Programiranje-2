
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga1
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {
    FILE *vhodna = fopen(argv[1], "rb");
    FILE *izhodna =fopen(argv[2], "wb");
    //FILE *izhodnaa =fopen(argv[3], "w");

    unsigned char temp = '0';
    unsigned char temp2 = '0';
    int prvic = 1;
    int a = 27;
    int b = 201;
    int preveri = 0;
    while(fread(&temp, sizeof(unsigned char), 1, vhodna) == 1){
        if(temp2 == a){
            if(temp == b){
                fwrite(&temp, sizeof(unsigned char), 1, izhodna);
                if(fread(&temp, sizeof(unsigned char), 1, vhodna) == 1){

                }else{
                    preveri = 1;
                    break;
                }
            }else{
                fwrite(&temp2, sizeof(unsigned char), 1, izhodna);
            }
        }else{
            if(prvic == 1){
                prvic = 0;
            }else{
            fwrite(&temp2, sizeof(unsigned char), 1, izhodna);
            }
        }
        temp2 = temp;
    }
    if(preveri == 0){
    fwrite(&temp2, sizeof(unsigned char), 1, izhodna);
    }
    

    fclose(vhodna);
    fclose(izhodna);

    return 0;
}
