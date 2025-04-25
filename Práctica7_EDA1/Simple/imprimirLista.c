void imprimirLista(persona ** comienzo){
    int c;
    persona *aux = *comienzo;
    system("cls");

    if (*comienzo == NULL){
        
        printf(" No hay elementos \n");

    }

    else {

        printf("Imprimiendo lista;\n\n");

           while (aux != NULL){

        printf("%d %s %d\n",aux->id,aux->nombre,aux->edad);
        aux = aux->sig;

    }
        
    
    }
    
    printf("\n\nPresione 1 para volver al menu Lista Simple:\n");
    
    while (scanf ("%d", &c) == 1)
    {
        system("cls");
        break;}

    if(c != 1)
        printf("\nOpcion incorrecta\n Regresando al menu Lista Simple\n\n"); 
        return;  

    
}