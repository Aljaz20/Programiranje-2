
/*
 * Va"sa re"sitev prve naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);
    int* stevila =(int*)calloc(200000, sizeof(int));
    int* pojavitve = (int*)calloc(200000, sizeof(int));
    int st;
    int stevec = 0;
    int maxrazdalja = 0;
    int razdalja = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &st);
        if(pojavitve[st+100000] == 0){
            pojavitve[st+100000] = i+1;
        }else{
            razdalja = i - pojavitve[st+100000] +1;
            if(razdalja == maxrazdalja){
                stevila[stevec] = st;
                stevec++;
            }else if(razdalja > maxrazdalja){
                maxrazdalja = razdalja;
                free(stevila);
                stevila = (int*)calloc(200000, sizeof(int));
                stevila[0] = st;
                stevec = 1;
            }
        }
    }
    free(pojavitve);
        

    printf("%d\n", maxrazdalja);
    for(int i = 0; i < stevec; i++){
        printf("%d\n", stevila[i]);
    }
    free(stevila);
    return 0;
}
