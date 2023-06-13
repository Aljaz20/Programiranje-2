
#define N 42

typedef struct {
    int a;
} S;

typedef struct {
    int b[N];
    int* c;
    int* d[N];
    int** e;
    S* f;
    S** g;
} T;

int steviloPozitivnih(T* t);
