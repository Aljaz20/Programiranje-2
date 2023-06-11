#include <stdio.h>

int main()
{
    int preveri = 2;
    int stevilka = 0;
    int prejsna = 0;
    char presledek = ' ';
    scanf("%d", &stevilka);
    if(stevilka < 0){
        preveri = 0;
    }else{
        preveri = 1;
    }
    prejsna = stevilka;
    while(presledek != '\n'){
        scanf("%d", &stevilka);
        if(preveri == 0 && stevilka > 0){
            preveri = 1;
            printf("%d\n", prejsna);
        }else if(preveri == 1 && stevilka < 0){
            preveri = 0;
            printf("%d\n", prejsna);
        }

        prejsna = stevilka;
        scanf("%c", &presledek);
    }
    printf("%d\n", prejsna);
    return 0;
}
