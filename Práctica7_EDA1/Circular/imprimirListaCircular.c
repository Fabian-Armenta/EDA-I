void imprimirListaCircular(persona ** comienzo, persona **ult){
    
    int c;

    persona *aux;

    system("cls");

    if (*comienzo == NULL){
        printf(" No hay elementos \n");
        return;    
    }
    
    aux = *comienzo;
    printf("Imprimiendo lista\n");

    do{

        printf("%d %s %d\n",aux->id,aux->nombre,aux->edad);
        aux = aux->sig;

    } while (aux != *comienzo);
       
     
    printf("\n\nPresione 1 para volver al menu Lista Circular:\n");
    
    if (scanf ("%d", &c) == 1 && c == 1){
        system("cls");
        return;
    }
    else
        exit(1);

    
    
}