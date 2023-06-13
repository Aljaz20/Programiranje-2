#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char imeVhoda[21];
    scanf("%s", imeVhoda);

    int n;
    scanf("%d", &n);

    char imeIzhoda[21];
    scanf("%s", imeIzhoda);


    FILE* fVhod = fopen(imeVhoda, "rb");

    int prva = 0, druga = 0, tretja = 0;

    unsigned char temp = '1';
    for(int i = 0; i < n; i++){
        fread(&temp, sizeof(unsigned char), 1, fVhod);
        if(temp == 0){
            fread(&temp, sizeof(unsigned char), 1, fVhod);
            if(temp == 0){
                fread(&temp, sizeof(unsigned char), 1, fVhod);
                if(temp > 0){
                    tretja++;
                }
            }else if(temp > 0){
                fread(&temp, sizeof(unsigned char), 1, fVhod);
                if(temp == 0){
                    druga++;
                }
            }

        }else if(temp > 0){
            fread(&temp, sizeof(unsigned char), 1, fVhod);
            if(temp == 0){
                fread(&temp, sizeof(unsigned char), 1, fVhod);
                if(temp == 0){
                    prva++;
                }
            }else{
                fread(&temp, sizeof(unsigned char), 1, fVhod);
            }

        }else{
            fread(&temp, sizeof(unsigned char), 1, fVhod);
            fread(&temp, sizeof(unsigned char), 1, fVhod);
        }
    }

    FILE *fIzhod = fopen(imeIzhoda, "w");
    fprintf(fIzhod, "%d\n", prva);
    fprintf(fIzhod, "%d\n", druga);
    fprintf(fIzhod, "%d\n", tretja);

    fclose(fIzhod);
    fclose(fVhod);

    return 0;
}

