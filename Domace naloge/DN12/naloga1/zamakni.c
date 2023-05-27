#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE *vhod;
    FILE *izhod;
    vhod= fopen(argv[1], "r");
    izhod= fopen(argv[2], "w");
    int z = 0;
    char *vrstica = calloc(1000, sizeof(char));

    while(fgets(vrstica, 1000, vhod) != NULL){
        int i = 0;
        while(vrstica[i] == ' '){
            i++;
        }
        if(vrstica[i] == '}'){
            z -= 4;
        }
        if(z < 4){
            z = 0;
        }
        for(int j = 0; j < z; j++){
            fprintf(izhod, " ");
        }
        fprintf(izhod, "%s", vrstica + i);
        while(vrstica[i] != '\0'){
            i++;
        }
        if(vrstica[i-2] == '{' || vrstica[i-1] == '{'){
            z += 4;
        }
    }
    fclose(vhod);
    fclose(izhod);
    return 0;
}