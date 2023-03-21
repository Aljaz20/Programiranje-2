#include <stdio.h>

int main(){

    int n;
    int sum = -1000000000;
    scanf("%d", &n);
    int temp;
    int tempsum = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &temp);

        if(temp > tempsum + temp){
            tempsum = temp;
        }else{
            tempsum += temp;
        }

        if(tempsum > sum){
            sum = tempsum;
        }
    }

    printf("%d\n", sum);
    return 0;
}
