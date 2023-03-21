#include <stdio.h>

int main() {

    int jepalindrom(long long int stevilka);
    long long int reverse(long long int stevilka);
    int k, a, b;

    scanf("%d", &k);
    scanf("%d", &a);
    scanf("%d", &b);


    int count = 0;
    int prever = 1;

    for(a; a<=b; a++){
        long long int temp = a;
        prever = 1;
        for(int i = 0; i < k; i++){
            temp = temp + reverse(temp);
            if(jepalindrom(temp) == 1){
                prever = 0;
                break;
            }
            if(temp > 100000000000000000){
                temp = temp + reverse(temp);
                if(jepalindrom(temp) == 1){
                    prever = 0;
                    break;
                }
                break;
            }
        }
        if(prever == 1){
            count++;
        }
    }

    printf("%d", count);
    return 0;
}

long long int reverse(long long int stevilka){
    long long int reverse = 0;
    while (stevilka > 0){
        reverse = reverse*10 + stevilka%10;
        stevilka /= 10;
    }
    return reverse;
}

int jepalindrom(long long int stevilka){
    int dolzina = 0;
    long long int temp = stevilka;
    long long int st = 0;
    while(temp > 0){
        st = st * 10 + temp%10;
        temp = temp /10;
        dolzina++;
    }
    dolzina /= 2;
    while(dolzina>0){
        stevilka /= 10;
        st /= 10;
        dolzina--;
    }
    if(stevilka == st){
        return 1;
    }else{
        return 0;
    }
}
