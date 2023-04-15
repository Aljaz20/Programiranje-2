#include <stdio.h>
#include <math.h>

int prastevilo(int stevilo){
    if (stevilo == 1){
        return 0;
    }
    int koren = (int) sqrt(stevilo);
    for(int i = 2; i <= koren; i++){
        if(stevilo % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int najdalse = 0;
    int dolzina = 0;
    int stevilo;
    scanf("%d", &stevilo);
    while(stevilo != 0){
        if(prastevilo(stevilo) == 1){
            dolzina++;
        }else{
            najdalse = najdalse > dolzina ? najdalse : dolzina;
            dolzina = 0;
        }
        scanf("%d", &stevilo);
    }
    najdalse = najdalse > dolzina ? najdalse : dolzina;
    printf("%d\n", najdalse);
    return 0;
}