#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int k;
    int* stevilo = calloc(1001, sizeof(int));
    stevilo[0] = 0;
    char a = 'a';
    int i = 0;
    scanf("%c", &a);
    while(a != ' '){
        i++;
        stevilo[i] = a-'0';
        scanf("%c", &a);
    }
    scanf("%d", &k);
    int prenos = 0;
    for(int j = i; j >= 0; j--){
        int temp = stevilo[j];
        temp *= k;
        temp += prenos;
        stevilo[j] = temp%10;
        prenos = temp/10;
    }
    for(int j = 0; j <=i; j++){
        if(j == 0 && stevilo[0] == 0){
            continue;
        }
        printf("%d", stevilo[j]);
    }
    printf("\n");
    free(stevilo);
    return 0;
}
