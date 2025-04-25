void menu(int);
void mostrarTienda();    
void mostrarTienda2() { 
system("cls");
int  i;
printf("************************************************************\n");
printf("Productos de la Floreria\n");
printf("\tID  \tFlores: \t Precio: \t Cantidad:\n");
for (i=0 ; i < NUM_PRODUCT ; i++ ){;
    printf("\t%d \t%9s   %9d    %13d\n", (Flores+i)->id, (Flores+i)->nombre, (Flores+i)->precio, (Flores+i)->cant);
    }
printf("************************************************************\n");
}

void mostrarTienda() {
    int n;
    mostrarTienda2();
    printf("Intoduce 1 para volver al menu\n");
scanf("%d", &n);
if (n==1){
    system("cls");
    menu(4);
}
else 
    printf("Numero incorrecto");

}
