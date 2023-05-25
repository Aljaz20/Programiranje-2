
typedef struct _Node{
    int vrednost;
    int (*tabela)[3];
    int* (*tabela2)[5];
    struct _Node* jaz;
} Node;