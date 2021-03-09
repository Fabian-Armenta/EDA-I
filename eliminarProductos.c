void menu();
void eliminarProductos();
void eliminarProductos2(){
    int seleccionado =0, cantidad = 0;
    mostrarCarrito2();
     printf("Ingresa el ID de las flores que deseas eliminar: \n");
    scanf("%d", &seleccionado);
if (seleccionado > 0 && seleccionado <= NUM_PRODUCT){
    printf("Cuantos flores deseas eliminar?\n");
    scanf("%d", &cantidad);
    if (cantidad <= numeros[2][seleccionado - 1]){
        numeros[2][seleccionado-1] -= cantidad;
        numeros [1][seleccionado-1] += cantidad;
    }
    else {
        if (cantidad > numeros[2][seleccionado]){
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
void regre(){
               int a;
    printf("Deseas seguir eliminando?\n 1 -> Si\n 2 -> No\n");
    scanf("%d",&a);
    if (a==1)
        agregarProductos();
    if (a==2)
    system("cls");
    menu();
}
void eliminarProductos(){
    eliminarProductos2();
    regresar();
}