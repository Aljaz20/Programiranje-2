#include <stdio.h>

int main(){
    int n = 0;
    int a = 0;
    int b = 1;
    int temp = 0;
    int printNum (int n);

    do {
        temp = getchar();
        if(temp == '-'){
            b*=-1;
        }else if (temp==' ')
        {
            a = n*b;
            n=0;
            b=1;
        }else if(temp >= '0' && temp <= '9'){
            n = n*10 + (temp - '0');
        }
    } while(temp != '\n');

    int skupaj = a +n*b;
    printNum(skupaj);

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