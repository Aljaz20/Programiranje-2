#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        if(temp >= 0 && temp < n){
            continue;
        }else{
            printf("NE\n");
            return 0;
        }
    }
    printf("DA\n");
    return 0;
}