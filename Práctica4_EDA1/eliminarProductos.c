void eliminarProductos();
void regresar3();
void eliminarProductos2(){
    int seleccionado =0, cantidad = 0;
    mostrarCarrito2();
     printf("Ingresa el ID de las flores que deseas eliminar: \n");
    scanf("%d", &seleccionado);
if (seleccionado > 0 && seleccionado <= NUM_PRODUCT){
    printf("Cuantos flores deseas eliminar?\n");
    scanf("%d", &cantidad);
    if (cantidad <= ( arrayCarro+seleccionado-1)->comprado){
        ( arrayCarro+seleccionado-1)->comprado -= cantidad;
        (Flores+seleccionado-1)->cant += cantidad;
       printf("Elemento eliminado\n");
    }
    else {
        if (cantidad > ( arrayCarro+seleccionado-1)->comprado){
            printf("No hay muchos elementos en carrito\n");
        }
        else {
            printf("Opcion Invalida");
        }
    }
}
else {
    if (seleccionado > NUM_PRODUCT){
        printf("El articulo no existe\n");
    }
    else{
        printf("Opcion Invalida");
    }
}
}
void regresar3(){

    int a;
    printf("Deseas seguir eliminando?\n 1 -> Si\n 2 -> No\n");
    scanf("%d",&a);
    if (a==1){
        eliminarProductos();
    }
    if (a==2){
    system("cls");
    menu(2);
    }
}

void eliminarProductos(){
    eliminarProductos2();
    regresar3();
}
