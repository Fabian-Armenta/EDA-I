int opcion;
void menu(){
printf("Bienvenido a la floreria 'El Colibri'\n Es un gusto atenderte\n");
printf("Menu: \n");
printf(" 1 -> Mostrar elementos de la tienda\n 2-> Agregar elemento al carrito\n");
printf(" 3-> Eliminar elemento del carrito\n 4-> Mostrar carrito\n 5-> Salir de la app\n");
printf("Selecciona una opcion por favor: ");
scanf("%d", &opcion);
switch (opcion) {
    case 1:
     mostrarTienda();
    break;
    case 2:
     agregarProductos();
    break;

     /*case 3:
     eliminarProductos();
    break;

    case 4:
     mostrarCarrito();
    break;*/

    case 5:
    salirApp();
    break;

    default:
    printf("Opcion no valida");
    break; 


}


}