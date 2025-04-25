void menuCola(){
    int op = 0;

    nodoCola *aux = NULL;
    nodoCola *aux2 = NULL;

    system("cls");

    while(1){
    printf("****************************************************************\n");
    printf("Bienvenido a la Cola\n Menu:\n");
    printf(" 1 --> Enqueue \n 2 --> Dequeue \n 3 --> Menu Principal\n");
    printf("****************************************************************\n");
    printf("Selecciona una opcion:\n");
    
        if (scanf("%d", &op) == 1){

            switch(op){
                case 1:
                    enqueue(&aux, &aux2);
                    mostrarCola(aux);
                    break;

                case 2:
                    dequeue(&aux, &aux2);
                    mostrarCola(aux);
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