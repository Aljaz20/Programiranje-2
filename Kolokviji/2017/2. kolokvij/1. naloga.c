#include <stdio.h>
#include <stdlib.h>


int change(double *kazalec){
    if(*kazalec == 0){
        free(kazalec);
        kazalec = NULL;
        return 0;
    }
    if(*kazalec < 0){
        *kazalec = -1.0;
        return -1;
    }else{
        *kazalec = 1.0;
        return 1;
    }
}

int main(){
    return 0;
}
