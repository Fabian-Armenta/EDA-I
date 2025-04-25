void buscarCircular(persona ** comienzo){

    int x,c;
    int a = 0;
    persona *aux = *comienzo;

    if (*comienzo == NULL)
        printf(" No hay elementos \n");
    else{
        printf("Introduce el  id: ");
        scanf("%d",&x);

        do{
            aux = aux->sig;
        } while (aux != *comienzo && aux->id != x);
        
        if (aux->id == x){
            printf("\nAqui esta tu registro:\n");
            printf("%d %s %d\n",aux->id,aux->nombre,aux->edad);
        }
        else
            printf("\nNo hay elementos con ese ID");
    }
    

    printf("\n\nPresione 1 para volver al menu Lista Circular:\n");
    
    if (scanf ("%d", &c) == 1 && c == 1){
        system("cls");
        return;
    }
    else{

        printf("\nOpcion incorrecta\n Saliendo del programa\n\n"); 
        exit(1);

    }
    
   
}