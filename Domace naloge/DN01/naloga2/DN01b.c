#include <stdio.h>

int main(){
    int count = 0;
    int temp = 0;
    int preveri = -1;
    int printNum (int n);

    do {
        temp = getchar();
    } while(temp != '1');

    do {
        count++;
        temp = getchar();
        if(temp == '1'){
        	preveri = 0;
        }
    } while(temp != '\n');
    
    count = count + preveri;

    printNum(count);

    return 0;
}

int printNum(int n){

   if (n>=10){
      printNum(n/10);
   }

   putchar(n%10 + '0');
   return 0;
}
