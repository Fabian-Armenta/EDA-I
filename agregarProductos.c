void menu();
void agregarProductos();
void agregarProductos2(){
    int seleccionado = 0, cantidad = 0;  
    mostrarTienda2();
    printf("Ingresa el ID de las flores que deseas comprar: \n");
    scanf("%d", &seleccionado);
if (seleccionado >0 && seleccionado <= NUM_PRODUCT) {
     printf("Cuantas flores deseas agregar?\n");
    scanf("%d", &cantidad);
    if (cantidad <= numeros[1][seleccionado-1])
    { numeros[2][seleccionado-1] += cantidad;
        numeros[1][seleccionado-1] -= cantidad;
        printf("Elemento agregado\n");
        } 
    else {
        if (cantidad > numeros[1][seleccionado]){
            printf("No hay muchas flores\n");
        }
        else {
            printf("Opcion invalida\n");
        }
    }
}
else {
    if (seleccionado > NUM_PRODUCT){
        printf("El articulo no existe\n");
    }
    else {
        printf("Opcion Invalida\n");
    }
}
}
void regresar(){
               int a;
    printf("Deseas seguir comprando?\n 1 -> Si\n 2 -> No\n");
    scanf("%d",&a);
    if (a==1)
        agregarProductos();
    if (a==2)
    system("cls");
    menu();
    
    
}
void agregarProductos(){
    agregarProductos2();
    regresar();
}