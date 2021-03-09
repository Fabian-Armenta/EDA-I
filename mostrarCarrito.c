void menu();
void mostrarCarrito();
void mostrarCarrito2(){
    system("cls");
    int a = 0, b = 0, c = 0, total = 0;
    while (a <= NUM_PRODUCT-1){
        if (numeros[2][a] >0){ b=1; c=1;}
        a++;
    }
    a=0;
    if (b==1){
    printf("Bienvenido a tu carrito\n");
    printf("\tID  \tFlores: \t Precio: \t Cantidad en carrito: \t Precio Total:\n");
    while (a <= NUM_PRODUCT-1){
        if (numeros[2][a] > 0) {
            printf("\t%d \t%9s   %9d    %13d  \t  %10d\n", a+1, productos[a], numeros[0][a], numeros[2][a],numeros[0][a]*numeros[2][a]);
            total += numeros[0][a]*numeros[2][a];
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
            printf("Opcion invalida");
        }

    }
}
void regresar2(){
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
}
void mostrarCarrito(){
    mostrarCarrito2();
    regresar2();
}
