#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    FILE *izhod = fopen("args.txt", "w");
    if(izhod == NULL){
        exit(1);
    }
    for(int i = 1; i < argc; i++){
        fprintf(izhod, "%s\n", argv[i]);
    }
    exit(0);
    return 0;
}