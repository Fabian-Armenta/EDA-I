typedef struct persona{
    
    int id;
    char nombre[10];
    int edad;
    struct persona *sig;

}persona;


enum boolean {B_false, B_true};

persona *lista = NULL;      //Este apuntador es el comienzo de mi lista enlazada circular
persona *ult = NULL;

FILE *ptr;

void llenarRegistros(persona **, persona **, FILE *);
void imprimirListaCircular(persona **, persona **);
void agregarNodoCircular(persona **, persona **, FILE *);
void eliminar(persona **);