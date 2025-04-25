#define NUM_PRODUCT 10
char *nombres [] = {"Rosas", "Girasoles", "Claveles", "Alcatraz", "Tulipanes",
                    "Lirios", "Dalias", "Narcisos", "Orquideas", "Margaritas"};
int precio [NUM_PRODUCT] = {15, 20, 12, 35, 70, 
                            40, 55, 63, 48, 36}; //precios
int cant [NUM_PRODUCT] = {100, 50, 40, 30,70,
                          80, 45, 20, 10, 60};  //cantidad

struct Flor{
    int id;
    char *nombre;
    int precio;
    int cant;
} Flores [NUM_PRODUCT];

typedef struct {
    char *nombre;
    int precio;
    int comprado;
} Carrito;

Carrito *arrayCarro = NULL;


      
