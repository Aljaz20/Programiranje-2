#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int p = 0;
    int q = 0;
    FILE *vhod;
    vhod = fopen(argv[1], "rb");
    for(int i = 0; i < 7; i++){
        if(argv[2][i] == '\0'){
            break;
        }
        p = p * 10 + (argv[2][i] - '0');
    }
    for(int i = 0; i < 7; i++){
        if(argv[3][i] == '\0'){
            break;
        }
        q = q * 10 + (argv[3][i] - '0');
    }
    
    unsigned char a;
    fseek(vhod, p/8, SEEK_SET);
    while(p < q){
        fread(&a, sizeof(unsigned char), 1, vhod);
        for (int i = 7-p%8; i >= 0 && p < q; i--) {
            unsigned char bit = (a >> i) & 1;
            printf("%d", bit);
            p++;
        }
    }
    fclose(vhod);
    return 0;
}