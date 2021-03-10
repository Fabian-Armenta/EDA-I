int opcion;
void menu(){
printf("Bienvenido a la floreria 'El Colibri'\n Es un gusto atenderte\n");
printf("Menu: \n");
printf(" 1 -> Mostrar elementos de la tienda\n 2-> Agregar elemento al carrito\n");
printf(" 3-> Mostrar Carrito\n 4-> Eliminar elemento del carrito\n 5-> Salir de la app\n");
printf("Selecciona una opcion por favor: ");
scanf("%d", &opcion);
switch (opcion) {
    case 1:
     mostrarTienda(productos, precio, cant);
     int n;
    printf("Intoduce 1 para volver al menu\n");
    scanf("%d", &n);
    if (n==1){
    system("cls");
    menu();
    }
    else {
    printf("Numero incorrecto");
}
    break;
    case 2:
     agregarProductos(cant, carrito);
      int a;
    printf("Deseas seguir comprando?\n 1 -> Si\n 2 -> No\n");
    scanf("%d",&a);
    if (a==1)
        agregarProductos(cant, carrito);
    if (a==2)
    system("cls");
    menu();
    break;

    case 3:
     mostrarCarrito(productos, precio, carrito);
      int f;
    printf("Presione 1 para volver al menu\n");
    scanf("%d",&f);
    if (f==1){
    system("cls");
    menu();
    }
    else {
        printf("Opcion incorrecta\n");
    }
    break;

    case 4:
     eliminarProductos(cant, carrito);
     int k;
    printf("Deseas seguir comprando?\n 1 -> Si\n 2 -> No\n");
    scanf("%d",&k);
    if (k==1)
        agregarProductos(cant, carrito);
    if (k==2)
    system("cls");
    menu();
    break; 

    case 5:
    salirApp();
    break; 

    default:
    printf("Opcion no valida");
    break;


}


}