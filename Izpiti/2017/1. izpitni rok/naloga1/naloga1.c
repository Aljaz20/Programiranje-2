#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() 
{
    int vsota = 0;
    int stevilka = 0;
    char a = ' ';
    char b = ' ';
    scanf("%c", &a);
    while(a != '\n'){
        stevilka = 0;
        if(b == ' ' && a >= '0' && a <='9'){
            while(a >= '0' && a <='9'){
                stevilka = 10*stevilka + a-'0';
                scanf("%c", &a);
            }
            if(a==' '){
                vsota += stevilka;
            }else if(a == '\n'){
                vsota += stevilka;
                printf("%d", vsota);
                return 0;
            }
        }
        b = a;
        scanf("%c", &a);
    }
    printf("%d", vsota);
    return 0;
}
