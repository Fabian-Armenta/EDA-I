void mostrarTienda(char **, int*, int*);    //puntero que almacena otro puntero **ap
void mostrarTienda(char **productos, int *precio, int *cant) { 
system("cls");
int  i;
printf("Productos de la Floreria\n");
printf("\tID  \tFlores: \t Precio: \t Cantidad:\n");
for (i=0 ; i < 5 ; i++ ){;
    printf("\t%d \t%9s   %9d    %13d\n", i+1, *(productos+i), *(precio+i), *(cant+i));
    }

}
