#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct persona{
    
    int id;
    char nombre[10];
    int edad;
    struct persona *sig;

}persona;

void llenarRegistros(persona **,FILE *);
void imprimirLista(persona **);
void agregarNodo(persona **,FILE *);
void eliminar(persona **,FILE *);


int main(){

    persona *lista = NULL;
    FILE *ptr;

    llenarRegistros(&lista,ptr);
    imprimirLista(&lista);
    agregarNodo(&lista,ptr);
    imprimirLista(&lista);
    eliminar(&lista,ptr);

    return 0;
}

void llenarRegistros(persona **Comienzo,FILE *archivo){

    int x,y;
    char buff[10];
    archivo = fopen("archivo.txt", "r");

    while (!feof(archivo)){

        persona *nodo = (persona*)malloc(sizeof(persona));
        fscanf(archivo,"%d",&x);
        fscanf(archivo,"%s",buff);
        fscanf(archivo,"%d",&y);

        nodo->id = x;
        strcpy(nodo->nombre,buff);
        nodo->edad = y;
        nodo->sig = NULL;

        if(*Comienzo == NULL)
            *Comienzo = nodo;
        else{
            persona *aux = *Comienzo;

            while (aux->sig != NULL){
                aux = aux->sig;
            }

            aux->sig = nodo;

        }
    }
    
    fclose(archivo);

}

void imprimirLista(persona ** comienzo){

    persona *aux = *comienzo;
    while (aux != NULL){

        printf("%d %s %d\n",aux->id,aux->nombre,aux->edad);
        aux = aux->sig;
        
    }
    
}

void agregarNodo(persona **Comienzo,FILE *archivo){

    int x,y;
    char buff[10];

    archivo = fopen("archivo.txt","a");

    printf("Introduce id: ");
    scanf("%d",&x);

    printf("\n");

    printf("Introduce nombre: ");
    scanf("%s",buff);

    printf("\n");

    printf("Introduce edad: ");
    scanf("%d",&y);

    persona *nodo = (persona*)malloc(sizeof(persona));
     
    nodo->id = x;
    strcpy(nodo->nombre,buff);
    nodo->edad = y;
    nodo->sig = NULL;

    if(*Comienzo == NULL)
        *Comienzo = nodo;
    else{
        persona *aux = *Comienzo;

        while (aux->sig != NULL){
            aux = aux->sig;
        }

            aux->sig = nodo;

    }

    fprintf(archivo,"\n%d %s %d",x,buff,y);   

    fclose(archivo);

}


void eliminar(persona **Comienzo,FILE *archivo){

    int x,y;
    char buff[10];
    archivo = fopen("archivo.txt", "a");

    while (!feof(archivo)){

        fscanf(archivo,"%d",&x);
        fscanf(archivo,"%s",buff);
        fscanf(archivo,"%d",&y);

        if (x == (*Comienzo)->id){
            fputs("                      ",archivo);
        }
        

    }
        



}
