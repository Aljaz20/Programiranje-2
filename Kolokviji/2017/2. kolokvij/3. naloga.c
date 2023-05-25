#include <stdio.h>
#include <stdlib.h>

typedef struct node {int value; struct node *next;} node, *list;

node* minus1(node* zacetek){
    if(zacetek == NULL || zacetek->next == NULL || zacetek->next->next == NULL){
        return NULL;
    }
    int vsota = zacetek->next->value + zacetek->next->next->value;
    if(vsota == -1){
        node* temp = minus1(zacetek->next);
        if(temp == NULL){
            return zacetek;
        }
        else{
            return temp;
        }
    }
    return minus1(zacetek->next);
}

int main(){
    return 0;
}