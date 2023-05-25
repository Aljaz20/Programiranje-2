#include <stdio.h>
#include <stdlib.h>

typedef struct _node { int value; struct _heap *left, *right; } node;

int prestej(node *heap){
    if(heap == NULL){
        return 0;
    }
    return 1 + prestej(heap->left) + prestej(heap->right);
}

void dump_heap (FILE *file, node *heap){
    if(heap == NULL){
        return;
    }
    int dolzina = prestej(heap);
    if(dolzina > 8){
        fprintf(file, "%d\n", heap->value);
    }
    dump_heap(file, heap->left);
    dump_heap(file, heap->right);
    
}

int main(){
    return 0;
}