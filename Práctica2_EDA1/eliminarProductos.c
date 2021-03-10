void eliminarProductos(int cant [5], int carrito[5]){
    int seleccionado =0, cantidad = 0;
    mostrarCarrito(productos, precio, carrito);
     printf("Ingresa el ID de las flores que deseas eliminar: \n");
    scanf("%d", &seleccionado);
if (seleccionado > 0 && seleccionado <= 5){
    printf("Cuantos flores deseas eliminar?\n");
    scanf("%d", &cantidad);
    if (cantidad <= * (carrito + seleccionado-1)){
        * (carrito + seleccionado-1) -= cantidad;
       * (cant + seleccionado -1) += cantidad;
       printf("Elemento eliminado\n");
    }
    else {
        if (cantidad > * (carrito + seleccionado)){
            printf("No hay muchos elementos en carrito\n");
        }
        else {
            printf("Opcion Invalida");
        }
    }
}
else {
    if (seleccionado > 5){
        printf("El articulo no existe\n");
    }
    else{
        printf("Opcion Invalida");
    }
}
}