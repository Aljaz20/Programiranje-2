#include <stdio.h>
#include <stdlib.h>

void toUUpper(char* str) {
    if (*str == '\0') {
        return;
    }
  
    if (*str >= 'a' && *str <= 'z') {
        *str = *str - 32;
    }
  
    toUUpper(str + 1);
}

int main(){
    return 0;
}