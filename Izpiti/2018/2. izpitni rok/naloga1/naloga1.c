#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int razdalje = 0;
    int prejsni = -1;
    char znak = '-';

    for(int i = 0; i < n; i++){
        scanf("%c", &znak);
        if(znak == ' '){
            i--;
            continue;
        }
        if(znak =='-'){
            continue;
        }
        if(znak == '+' && prejsni == -1){
            prejsni = i;
            continue;
        }
        if(znak == '+'){
            count++;
            razdalje += (i-prejsni);
            prejsni = i;
        }

    }

    printf("%d\n", razdalje/count);

    return 0;
}