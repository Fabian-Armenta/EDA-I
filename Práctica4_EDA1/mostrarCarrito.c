
void menu(int);
void mostrarCarrito();
void mostrarCarrito2(){
    system("cls");

    int a = 0, b = 0, c = 0, total = 0;
    while (a < NUM_PRODUCT){
        if ((arrayCarro+a)->comprado == 0)
            b += 1;
        
        a++;
    }

    a=0;

    if (b == NUM_PRODUCT ){
        int h;
        printf("No hay nada en carrito\n");

    }
        
        
        
    else {
        printf("*************************************************************************************\n");    
        printf("Bienvenido a tu carrito\n\n");
        printf("\tID  \tFlores: \t Precio: \t Cantidad en carrito: \t Precio Total:\n");

        while (a < NUM_PRODUCT){
            if ((arrayCarro+a)->comprado > 0)
                printf("\t%d \t%9s   %9d    %13d  \t  %10d\n", a+1, (arrayCarro+a)->nombre, (arrayCarro+a)->precio,(arrayCarro+a)->comprado , (arrayCarro+a)->precio * (arrayCarro+a)->comprado);
            
            total += (arrayCarro+a)->precio * (arrayCarro+a)->comprado;
            a++;
        }
        printf("\nTotal a pagar: \n");
        printf("%d pesos\n", total);
         printf("\n*************************************************************************************\n");
        }
    
       
}





void regresar2(){
    int f;
    printf("Presione 1 para volver al menu\n");
    scanf("%d",&f);
    if (f==1){
    system("cls");
    menu(6);
    }
    else {
        printf("Opcion incorrecta\n");
    }
}

void mostrarCarrito(){
mostrarCarrito2();
regresar2();
}