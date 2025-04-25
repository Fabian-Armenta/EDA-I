int opcion;
void menu(int a){
if (a==10) 
    llenarRegistros(&lista,ptr); //Cargar nodos solo cuando llamo a menu desde main

while (1) {

    printf("************************************************************");
    printf("\nBienvenido!\n");
    printf("Menu: \n");
    printf(" 1-> Lista Enlazada \n");
    printf(" 2-> Salir\n");
    printf("************************************************************\n");
    printf("Selecciona una opcion por favor: ");
    

    if (scanf("%d", &opcion) == 1){

            switch (opcion) {
                case 1:
                menuLigada();
                break;

                case 2:
                printf("Fue un gusto\n Adios!\n");
                return;
                
                  }

    }
    else {
        printf("\nOpcion no valida");
        break;
    }

}


}