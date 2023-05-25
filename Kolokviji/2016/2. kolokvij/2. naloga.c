#include <stdio.h>
#include <stdlib.h>

typedef struct _node { int value; struct _node *next; } node;

void loopify (node *list){
    int vrednost;
    node *tmp = list;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    vrednost = tmp->value;
    while(list->value != vrednost){
        list = list->next;
    }
    tmp->next = list;
    
}

int main(){
    return 0;
}