void Hashtags(int a){
if (a==10)
    llenarHashtags(&et, ptr); //Cargar nodo solo una vez

int opcion;
while (1) {

    printf("************************************************************");
    printf("\n\n\t\t T O P  5  # H A S H T A G S\n\n\n");
    mostrarHashtags(&et);
    printf("\nQue deseas hacer?\n");
    printf("\n1 ---> Agregar #Hagstag \n");
    printf("\n2 ---> Eliminar #Hagstag \n");
    printf("\n3 ---> Salir al Menu\n\n");
    printf("************************************************************\n");
    printf("\n\nSelecciona una opcion por favor: \n");
    

    if (scanf("%d", &opcion) == 1){

            switch (opcion) {
                case 1:
                    AgregarHashtags(&et, ptr);
                break;

                case 2:
                printf("Fue un gusto\n Adios!\n");
                return;
                
                  }

    }
    else {
        printf("\nOpcion no valida\n\nSaliendo del programa...\n\n");
        break;
    }

}
}