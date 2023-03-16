#include <stdio.h>

int main(){
    int n = 0;
    int temp = 0;
    int printNum (int n);
    int prvic = 0;
    int moznost = 0;
    int preveri = 0;
    int izpisi0(int n);

    do {
        temp = getchar();
        
        if(temp == ' '){
            prvic = 0;
            moznost = 0;
            if(preveri == 0){
                n=n*10 +1;
            }
            preveri = 0;
            
            continue;
        }
        if(preveri == 1){
            continue;
        }
        if(prvic == 0){
            if(temp == '+' || temp == '-'){
                moznost = 1;
                temp = getchar();
                if(temp > '0' && temp <= '9'){
                    moznost = 3;
                    prvic = 1;
                }else if(temp == '0'){
                    temp = getchar();
                    if(temp != ' ' && temp != '\n'){
                    n = n*10;
                    preveri = 1;
                    izpisi0(n);
                    }else{
                        n = n*10 +1;
                        prvic = 0;
                    }
                }else if(temp == ' '){
                    n=n*10;
                    prvic = 0;
                    izpisi0(n);
                }else{
                    n = n*10;
                    preveri = 1;
                    izpisi0(n);
                }
            }else if(temp == '0'){
                moznost = 2;
                temp = getchar();
                if(temp != ' ' && temp != '\n'){
                    n = n*10;
                    preveri = 1;
                    izpisi0(n);
                }else{
                    n = n*10 +1;
                    prvic = 0;
                }
            }else if(temp > '0' && temp <= '9'){
                moznost = 3;
                prvic = 1;
            }else{
                n = n*10;
                preveri = 1;
                izpisi0(n);
            }
            
        }else{
            if(temp >= '0' && temp <= '9'){

            }else if(temp == '\n') {
                n=n*10 +1;
            }else{
                n=n*10;
                preveri = 1;
                izpisi0(n);
            }
            
        }
    } while(temp != '\n');

    if(n != 0){
        printNum(n);
    }

    

    return 0;
}

int printNum(int n){

   if (n < 0) {
       putchar('-');
       n = -n;
   }

   if (n>=10){
      printNum(n/10);
   }

   putchar(n%10 + '0');
   return 0;
}

int izpisi0(int n){
    if(n == 0){
        putchar('0');
    }
    
    return 0;
}