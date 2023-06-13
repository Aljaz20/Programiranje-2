
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int stevilo;
    int vsota = 0;
    scanf("%d", &stevilo);
    while(stevilo != 0){
        if((stevilo - 42) % 100 == 0){
            vsota += stevilo;
        }
        scanf("%d", &stevilo);
    }
    printf("%d\n", vsota);
    return 0;
}
