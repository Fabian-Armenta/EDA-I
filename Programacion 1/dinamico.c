#include <stdio.h>
#include <stdlib.h>
#define NUM_PRODUCT 10

char *nombres [] = {"Rosas", "Girasoles", "Claveles", "Alcatraz", "Tulipanes",
                    "Lirios", "Dalias", "Narcisos", "Orquideas", "Margaritas"};
int precio [NUM_PRODUCT] = {15, 20, 12, 35, 70, 
                            40, 55, 63, 48, 36}; //precios
int cant [NUM_PRODUCT] = {100, 50, 40, 30,70,
                          80, 45, 20, 10, 60};  //cantidad
int stock [NUM_PRODUCT] =  {0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0};     //Productos en carrito

int main(){

typedef struct {
    char *nombre;
    int precio;
    int comprado;
} carrito;

carrito *aleksei;

aleksei = (carrito *) malloc (10 * sizeof(carrito));

for (int i=0 ; i<10 ; i++){
    
    (aleksei+i)->nombre = *(nombres+i);
    (aleksei+i)->precio = *(precio+i);
    (aleksei+i)->comprado = *(stock+i);

    printf ("%s\n", (aleksei+i)->nombre);
    printf ("%d\n", (aleksei+i)->precio);
    printf ("%d\n", (aleksei+i)->comprado);
}

free (aleksei);

    return 0;
}