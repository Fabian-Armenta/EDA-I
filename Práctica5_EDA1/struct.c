#define TAM 5

enum boolean {B_false, B_true};

int h = 0;
int t = 0;

typedef struct nodoPila{
    int x;
    struct nodoPila *sig;
}nodoPila;


typedef struct nodoCola{
    int x;
    struct nodoCola *sig;
}nodoCola;

