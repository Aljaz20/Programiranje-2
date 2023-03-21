#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    int temp;
    int koncna = -1;
    scanf("%d", &temp);
    if(temp == 0){
        printf("%d", a);
        return 0;
    }
    

    while(temp != 0){
        if(temp == 1){
            a = (a+b)/2;
            if(b-a != 1){
                a++;
            }else{
                koncna = a+1;                
            }
        }else{
            b = (a+b)/2;
            if(b-a != 1){
                b--;
            }else{
                koncna = b-1;
            }
        }
        scanf("%d", &temp);
        if(koncna != -1){
            if(temp != 0){
                char s[] = "PROTISLOVJE";
                printf("%s",s);
            }else{
                printf("%d",koncna);
            }
            return 0;
        }
    }

    
    printf("%d %d",a,b);
    

    return 0;
}
