void menu();
void mostrarCarrito(char **, int*, int*);
void mostrarCarrito(char **productos, int *precio, int *carrito){
    system("cls");
    int a = 0, b = 0, c = 0, total = 0;
    while (a <= 5-1){
        if (*(carrito+a) >0){ b=1; c=1;}
        a++;
    }
    a=0;
    if (b==1){
    printf("Bienvenido a tu carrito\n");
    printf("\tID  \tFlores: \t Precio: \t Cantidad en carrito: \t Precio Total:\n");
    while (a <= 5-1){
        if (carrito > 0) {
            printf("\t%d \t%9s   %9d    %13d  \t  %10d\n", a+1, *(productos+a), *(precio+a), *(carrito+a),*(precio+a) * *(carrito+a));
            total += *(precio+a) * *(carrito+a);
        }
        a++;
    }
    printf("Total a pagar: \n");
    printf("%d pesos\n", total);
    }
    else {
        int h;
        printf("No hay nada en carrito\n Presiona 1 para volver al menu\n");
        scanf("%d",&h);
        if (h==1){
            system("cls");
            menu();
        }
        else {
            printf("Opcion invalida\n");
        }

    }
}
