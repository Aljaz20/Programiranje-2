#include <stdio.h>

int main(){

    int jeAmidnum(int stevilka);
    int stevilka;

    scanf("%d", &stevilka);
    

    if(jeAmidnum(stevilka) != 0){
        printf("%d", jeAmidnum(stevilka));
    }else{
        printf("%s", "NIMA");
    }

    return 0;
}

int jeAmidnum(int stevilka){
    int sum = 0;
    for(int i = 1; i <= stevilka/2; i++ ){
        if(stevilka%i == 0){
            sum += i;
        }
    }

    int sum2 = 0;
    for(int i = 1; i <= sum/2; i++ ){
        if(sum%i == 0){
            sum2 += i;
        }
    }

    if(sum2 == stevilka  && sum!= stevilka){
        return sum;
    }
    return 0;
}
