#include <stdio.h>

int main() {
    int n;
    int izpis = 1;
    int prva;
    scanf("%d", &n);
    scanf("%d", &prva);

    for(int i = 1; i < n; i++){
        int temp;
        scanf("%d", &temp);
        if(temp != prva){
            izpis = 0;
            break;
        }
    }
    

    printf("%d", izpis);
    return 0;
}
