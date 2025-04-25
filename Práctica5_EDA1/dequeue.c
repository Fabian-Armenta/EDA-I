nodoCola *dequeue(nodoCola **aux, nodoCola **aux2){

    system("cls");

    if(*aux != NULL){

        nodoCola *newAp = *aux;

        if(*aux == NULL){

            printf("Es el final\n");

            *aux = NULL;
            *aux2 = NULL;

            t = 0;
        }
        else {
           *aux = newAp->sig;
        }

        free(newAp);

        t--;

        return newAp;
    }
    else{

        printf("No se puede desencolar en una cola vacia\n");
        return NULL;
    }

}