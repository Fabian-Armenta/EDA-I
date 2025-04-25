nodoPila pop(nodoPila **aux){

    system("cls");

    if(*aux != NULL){

        nodoPila *newAp = *aux;

        *aux = newAp ->sig;

        free (newAp);
        t--;

        return newAp;

    }
    else{

        printf("No se puede eliminar en una pila vacia\n");
        return;
    }
}