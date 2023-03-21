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
            if(temp > '0' && temp <= '9'){
                moznost = 1;
                prvic = 1;
            }else if(temp == '0'){
                moznost = 2;
                temp = getchar();
                if(temp == ' ' || temp == '\n'){
                    n = n*10 +1;
                }else if(temp >= '0' && temp <= '7'){
                    prvic = 1;
                }else if(temp == 'x'){
                    moznost = 3;
                    temp = getchar();
                    if(temp == ' '){
                        n=n*10;
                        prvic = 0;
                        izpisi0(n);
                    }else{
                        if((temp >= '0' && temp <= '9') || (temp >= 'A' && temp <= 'F')){

                        }else if(temp == '\n') {
                            n=n*10 +1;
                        }else{
                            n=n*10;
                            preveri = 1;
                            izpisi0(n);
                        }
                        prvic = 1;
                    }
                    
                }else if(temp == 'b'){
                    moznost = 4;
                    temp = getchar();
                    if(temp == ' '){
                        n=n*10;
                        prvic = 0;
                        izpisi0(n);
                    }else{
                        if(temp == '0' || temp == '1'){

                        }else if(temp == '\n') {
                            n=n*10 +1;
                        }else{
                            n=n*10;
                            preveri = 1;
                            izpisi0(n);
                        }
                        prvic = 1;
                    }
                }else{
                    n = n*10;
                    preveri = 1;
                    izpisi0(n);
                }
            }else{
                n = n*10;
                preveri = 1;
                izpisi0(n);
            }
            
        }else{
            if(moznost == 1){
                if(temp >= '0' && temp <= '9'){

                }else if(temp == '\n') {
                    n=n*10 +1;
                }else{
                    n=n*10;
                    preveri = 1;
                    izpisi0(n);
                }
            }else if(moznost == 2){
                if(temp >= '0' && temp <= '7'){

                }else if(temp == '\n') {
                    n=n*10 +1;
                }else{
                    n=n*10;
                    preveri = 1;
                    izpisi0(n);
                }
            }else if(moznost == 4){
                if(temp == '0' || temp == '1'){

                }else if(temp == '\n') {
                    n=n*10 +1;
                }else{
                    n=n*10;
                    preveri = 1;
                    izpisi0(n);
                }
                prvic = 1;
            }else{
                if((temp >= '0' && temp <= '9') || (temp >= 'A' && temp <= 'F')){

                }else if(temp == '\n') {
                    n=n*10 +1;
                }else{
                    n=n*10;
                    preveri = 1;
                    izpisi0(n);
                }
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
