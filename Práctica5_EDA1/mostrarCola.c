void mostrarCola(nodoCola *aux2){

    system("cls");
    int a=0;

    if(aux2 == NULL){

        printf("\nLa Cola esta vacia\n\n\n");
        
        
    }
    else{
        
        printf("Cabeza -->");

        while(aux2 != NULL){
            printf("%d -->", aux2->x);

            aux2 = aux2 ->sig;

        }

        printf("Cola\n\n\n");    
    }


}