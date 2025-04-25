typedef struct persona{
    
    int id;
    char nombre[10];
    int edad;
    struct persona *sig;

}persona;


persona *lista = NULL;
persona *ult =NULL;
FILE *ptr;
void llenarRegistros(persona **,FILE *);
void imprimirLista(persona **);
void agregarNodo(persona **,FILE *);
void eliminar2(persona **);