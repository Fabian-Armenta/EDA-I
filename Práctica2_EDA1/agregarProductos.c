void agregarProductos(int cant [5], int carrito[5]){

    int seleccionado = 0, cantidad = 0;  
    
    mostrarTienda(productos, precio, cant);
    
    printf("Ingresa el ID de las flores que deseas comprar: \n");
    
    scanf("%d", &seleccionado);
if (seleccionado >0 && seleccionado <= 5) {
    
     printf("Cuantas flores deseas agregar?\n");
    
    scanf("%d", &cantidad);
    
    if (cantidad <= *(cant + seleccionado-1)){
     * (carrito + seleccionado-1) += cantidad;
    
     * (cant + seleccionado -1) -= cantidad;
    
        printf("Elemento agregado\n");

        } 
    else {
        if (cantidad > *(cant + seleccionado-1)){

            printf("No hay muchas flores\n");
        }
        else {
            
            printf("Opcion invalida\n");
        }
    }
}
else {
    if (seleccionado > 5)
        printf("El articulo no existe\n");
    
    else 
        printf("Opcion Invalida\n");
    
}
}
