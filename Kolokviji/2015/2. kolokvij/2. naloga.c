#include <stdio.h>
#include <stdlib.h>

typedef struct _node { int value; struct _node *next; } node;

node *filter(int max, node *list){
    if(list == NULL){
        return NULL;
    }
    if(list->value > max){
        list = list->next;
    }
    node *tmp = list;
    while(list->next != NULL){
        if(list->next->value > max){
            list->next = list->next->next;
        }
        else{
            list = list->next;
        }
    }
    return tmp;

}

int main(){
    return 0;
}