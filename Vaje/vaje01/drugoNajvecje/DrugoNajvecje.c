#include <stdio.h>;

int main() {
    int n;
    int prva;
    int druga;
    int temp;
    scanf("%d", &n);
    scanf("%d", &prva);
    scanf("%d", &temp);
    
    if(temp > prva){
        druga = prva;
        prva = temp;
    }else{
        druga = temp;
    }
    for(int i = 2; i < n; i++){
        scanf("%d", &temp);
        if(temp >= prva){
            druga = prva;
            prva = temp;
        }else if(temp > druga){
            druga = temp;
        }
    }
    printf("%d", druga);
    return 0;


}
