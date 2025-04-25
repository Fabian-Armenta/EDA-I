
void mostrarTienda2(char *productos, int precio, int cantidad) { 
system("cls");
int *ap, i;
char *ap2;
*ap = precio;
ap2 = productos;
printf("Productos de la Floreria\n");
printf("\tID  \tFlores: \t Precio: \t Cantidad:\n");
for (i=0 ; i < NUM_PRODUCT ; i++ ){;
    printf("\t%d \t%9s   %9d    %13d\n", i+1, *(ap2+i), *(ap+i), *(ap+(i+5)));
    }

}
void mostrarTienda() {
    int n;
 mostrarTienda2(*productos, precio, cantidad);
    printf("Intoduce 1 para volver al menu\n");
scanf("%d", &n);
if (n==1){
    system("cls");
menu();
}
else {
    printf("Numero incorrecto");
}
}