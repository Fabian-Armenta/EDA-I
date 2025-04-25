char *nombres [] = {"Rosas", "Girasoles", "Clavel", "Alcatraz", "Tulipanes"};
int precio [5] = {15, 30, 12, 35, 70}; //precios
int cant [5] = {100, 50, 40, 30,70};  //cantidad
int carrito [5] =  {0, 0, 0, 0, 0};     //Productos en carrito

struct Flor{
    int id;
    char *nombre;
    int precio;
    int cant;
    int carrito;
} Flores [5];

