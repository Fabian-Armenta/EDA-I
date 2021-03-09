void mostrarTienda2() { 
system("cls");
int i, j;
printf("Productos de la Floreria\n");
printf("\tID  \tFlores: \t Precio: \t Cantidad:\n");
for (i=0 ; i < NUM_PRODUCT ; i++ ){
    printf("\t%d \t%9s   %9d    %13d\n", i+1, productos[i], numeros[0][i], numeros[1][i]);
    }

}
void mostrarTienda() {
    int n;
    mostrarTienda2();
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


