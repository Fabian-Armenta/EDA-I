void menuPila(){
    int op = 0;

    nodoPila *aux = NULL;

    system("cls");

    while(1){
    printf("****************************************************************\n");
    printf("Bienvenido a la Pila\n Menu:\n");
    printf(" 1 --> Push \n 2 --> Pop \n 3 --> Menu Principal\n");
    printf("****************************************************************\n");
    printf("Selecciona una opcion:\n");
    
        if (scanf("%d", &op) == 1){

            switch(op){
                case 1:
                    pushPila(&aux);
                    mostrarPila(aux);
                    break;

                case 2:
                    pop(&aux);
                    mostrarPila(aux);
                    break; 

              
                case 3:
                system("cls");
                    return;    

                default:
                    printf("Opcion invalida\n\n Regresando al menu principal\n\n");
                    return;         
            }
        }
        else {
            printf("Opcion no valida\n Adios!\n");
            break;
        }
    }

}