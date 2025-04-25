void buscar(persona **Comienzo){

    int x,c;
    int a = 0;
    persona *aux = *Comienzo;

    printf("Introduce el  id: ");
    scanf("%d",&x);


    while(aux != NULL && !a){
		if(aux -> id == x){
					a =1;
		}else{
				
                    aux = aux -> sig;
		}
    }

if (a){
    printf("\nAqui esta tu registro:\n");
     printf("%d %s %d\n",aux->id,aux->nombre,aux->edad);
        
}
else{
    printf("\nNo hay elementos con ese ID");
}

printf("\n\nPresione 1 para volver al menu Lista Enlazada:\n");
    
    if (scanf ("%d", &c) == 1 && c == 1){
        system("cls");
        return;
    }
    else{

        printf("\nOpcion incorrecta\n Adios!\n\n"); 
        exit(1);

    }
}