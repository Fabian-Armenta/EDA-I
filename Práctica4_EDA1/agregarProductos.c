void menu(int);
void agregarProductos();

void agregarProductos2(){

    int seleccionado = 0, cantidad = 0;  
    
    mostrarTienda2();

    
    
     
    
    printf("Ingresa el ID de las flores que deseas comprar: \n");
    
    scanf("%d", &seleccionado);
    
if (seleccionado >0 && seleccionado <= NUM_PRODUCT) {
    
    printf("Cuantas flores deseas agregar?\n");
    
    scanf("%d", &cantidad);
    
    if (cantidad <= (Flores+seleccionado-1)->cant ){

        (arrayCarro+seleccionado-1)->nombre = (Flores+seleccionado-1)->nombre;
        (arrayCarro+seleccionado-1)->precio = (Flores+seleccionado-1)->precio;
        (arrayCarro+seleccionado-1)->comprado += cantidad;
        (Flores+seleccionado-1)->cant -= cantidad;
    
        printf("*Elemento agregado*\n");

        } 
    else {

        if (cantidad > (Flores+seleccionado-1)->cant) 
             printf("No hay muchas flores\n");
        else 
            printf("Opcion invalida\n");
    }
}
else {
    if (seleccionado > NUM_PRODUCT)
        printf("El articulo no existe\n");
    
    else 
        printf("Opcion Invalida\n");
    
}
}

void regresar(){

    int x;
    printf("Deseas seguir comprando?\n 1 -> Si\n 2 -> No\n");
    scanf("%d",&x);
    if (x==1){
        agregarProductos();
    }
    if (x==2){
    system("cls");
    menu(1);
    }
}

void agregarProductos(){
agregarProductos2();
regresar();
}
