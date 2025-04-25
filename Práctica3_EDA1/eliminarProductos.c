void eliminarProductos2(){
    int seleccionado =0, cantidad = 0;
    mostrarCarrito2();
     printf("Ingresa el ID de las flores que deseas eliminar: \n");
    scanf("%d", &seleccionado);
if (seleccionado > 0 && seleccionado <= 5){
    printf("Cuantos flores deseas eliminar?\n");
    scanf("%d", &cantidad);
    if (cantidad <= Flores[seleccionado-1].carrito){
        Flores[seleccionado-1].carrito -= cantidad;
        Flores[seleccionado-1].cant += cantidad;
       printf("Elemento eliminado\n");
    }
    else {
        if (cantidad > Flores[seleccionado].carrito){
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
void regre(){

    int a;
    printf("Deseas seguir eliminando?\n 1 -> Si\n 2 -> No\n");
    scanf("%d",&a);
    if (a==1){
        eliminarProductos2();
    }
    if (a==2){
    system("cls");
    menu(1);
    }
}

void eliminarProductos(){
    eliminarProductos2();
    regre();
}