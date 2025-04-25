#define TAM 5

typedef struct hashtags{
    
    int id;
    char etiqueta[50];
    struct hashtags *sig;

}hashtags;

FILE *ptr;
hashtags *et = NULL;
