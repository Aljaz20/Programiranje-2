#include <stdio.h>
#include <stdlib.h>

typedef struct _heap { int value; struct _heap *left, *right; } heap;

int vsote(heap *h){
    if(h == NULL){
        return 0;
    }else{
        return h->value + vsote(h->left) + vsote(h->right);
    }
}

void sums (char *f, heap *h){
    if(f == NULL){
        printf("%d\n", vsote(h->left) + vsote(h->right));
        
    }else{
        fprintf(f, "%d\n", vsote(h->left) + vsote(h->right));
    }
    sums(f, h->left);
    sums(f, h->right);
    
}

int main(){
    return 0;
}