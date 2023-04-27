
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...

int main() {
    int n;
    scanf("%d", &n);
    int* a = malloc(n * sizeof(int));
    for (int i = 0;  i < n;  i++) {
        scanf("%d", &a[i]);
    }
    int vsota = 0;
    bool palindrom = true;
    for(int i = 0; i < n; i++){
        if(a[i] == a[n-i-1]){
            vsota += a[i];
        }else{
            palindrom = false;
            vsota += a[i];
        }
    }
    if(palindrom){
        printf("DA\n");
    }else{
        printf("NE\n");
    }

    printf("%d\n", vsota);
    
    return 0;
}
