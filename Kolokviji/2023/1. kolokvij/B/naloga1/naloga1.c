
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...

int main() {
    int n;
    scanf("%d", &n);
    int kordinate1[n];
    int kordinate2[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &kordinate1[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &kordinate2[i]);
    }
    int razdalja = 0;
    for(int i = 0; i< n; i++){
        int vsota = kordinate1[i] - kordinate2[i];
        razdalja += vsota*vsota;
    }
    printf("%d\n", razdalja);
    return 0;
}
