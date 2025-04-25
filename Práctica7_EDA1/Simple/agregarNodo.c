void buscarId(int);
void menuLigada();
void agregarNodo(persona **Comienzo,FILE *archivo){

    int x,y;
    char buff[11];

    archivo = fopen("archivo.txt","a");

    system("cls");


    do{
        system("cls");
        printf("Introduce id: \n");
        if(scanf("%d",&x))
            buscarId(x);      
        else
            exit(1);

    }while(x < 0);

    

    printf("\n(De 10 caracteres max)\nIntroduce nombre: \n");
    if (scanf("%s",buff) != 1 || strlen(buff) > 10)
        exit(1);
    

    printf("Introduce edad: ");
    if (scanf("%d",&y) != 1 || x <= 0 )
        exit(1);
    

    persona *nodo = (persona*)malloc(sizeof(persona));

                        
     nodo->id = x;
     strcpy(nodo->nombre,buff);
     nodo->edad = y;
     nodo->sig = NULL;

        if(*Comienzo == NULL){
                *Comienzo = nodo;
        }
        else{
             persona *aux = *Comienzo;

            while (aux->sig != NULL){
                aux = aux->sig;
            }

            aux->sig = nodo;
            printf("\nElemento agregado\n\n");
    
        }
        
       

       

    fprintf(archivo,"\n%d %s %d",x,buff,y);   

    fclose(archivo);

    

}


void buscarId(int id){

    persona *aux = lista;

    int a=0, c;

    if (lista == NULL)
        return;
    

    while(aux != NULL && !a){
		if(aux -> id == id){
					a =1;
		}else{
				
                    aux = aux -> sig;
		}
    }

if (a){
     printf("\nLo sentimos esta intentando usar un ID existente\n");
        printf("Debera regresar al menu...\n\n");
        printf("Presiona 1 para regresar: ");

        if (scanf("%d",&c) == 1 && c == 1)
            menuLigada();    
        else 
            exit(1);

    
    }
else{
    return;
}    
    

}