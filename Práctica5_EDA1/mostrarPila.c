void mostrarPila(nodoPila *aux){

    system("cls");
    int a=0;

    if(aux != NULL){

        while(aux != NULL){

            printf("\n%d -->", aux->x);

            aux = aux ->sig;

            a++;


        }
        printf("NULL\n\n\n");
    }

    else{
        printf("\nLa pila esta vacia\n\n\n");
    }

}