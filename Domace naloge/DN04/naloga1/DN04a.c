#include <stdio.h>

int main(){
    int n;
    int rez;
    scanf("%d", &n);
    int tab1[n];
    int tab2[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &tab1[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &tab2[i]);
    }

    for(int i = 0; i < n; i++){
        int prev = 1;
        if(tab1[i] == tab2[0]){
            int temp = i;
            rez = i;
            for(int j = 0; j < n && temp < n; j++){
                if(tab1[temp] == tab2[j]){
                    temp++;
                    if(temp==n-1){
                        prev = 0;
                        break;
                    }
                    continue;
                }else{
                    if(tab1[0] == tab2[j]){
                        for(int k = 0; k < rez; k++){
                            if(tab1[k] == tab2[j]){
                                j++;
                                continue;
                            }else{
                                break;
                            }
                            j++;
                            if(k == rez-1){
                                prev = 0;
                            }
                        }
                    }else{
                        break;
                    }
                }
                temp++;
                if(prev == 0 || j == n -1){
                    prev = 0;
                    break;
                }
            }
        }
        if(prev == 0){
            break;
        }
    }




    printf("%d", rez);
    return 0;
}