
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {
    FILE *vhod = fopen(argv[1], "r");
    FILE *izhod = fopen(argv[2], "w");

    int tabela[6] = {67, 99, 83, 115, 90, 122};

    unsigned char a = 'a';
    unsigned char b = 'b';
    if(fread(&b, sizeof(unsigned char), 1, vhod) != 1){
        fclose(vhod);
        fclose(izhod);
        exit(0);
    }


    while(true){
        if(fread(&a, sizeof(unsigned char), 1, vhod) != 1){
            fwrite(&b, sizeof(unsigned char), 1, izhod);
            fclose(vhod);
            fclose(izhod);
            exit(0);
        }
        
        if(b == '"'){
            int preveri = 0;
            for(int i = 0; i < 6; i++){
                if(a == tabela[i]){
                    preveri = 1;
                    break;
                }
            }
            if(preveri == 1){
                fwrite(&a, sizeof(unsigned char), 1, izhod);
                if(fread(&a, sizeof(unsigned char), 1, vhod) != 1){
                    fclose(vhod);
                    fclose(izhod);
                    exit(0);
                }
            }else{
                fwrite(&b, sizeof(unsigned char), 1, izhod);
                //fwrite(&a, sizeof(unsigned char), 1, izhod);
            }
            b = a;
        }else{
            fwrite(&b, sizeof(unsigned char), 1, izhod);
            b=a;
        }
    }

    return 0;
}
