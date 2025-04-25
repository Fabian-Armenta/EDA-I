void buscarId(int);
void menuCircular();

void agregarNodoCircular(persona **Comienzo, persona **ult, FILE *archivo){

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
     nodo->sig = nodo;

        if(*Comienzo == NULL){
                *Comienzo = nodo;
                nodo->sig = *Comienzo;
                *ult = nodo;
        }
        else{
            (*ult)->sig = nodo;
            (*ult) = nodo;
            (*ult)->sig = *Comienzo;
            printf("\nElemento agregado\n\n");
    
        }
        
       

       

    fprintf(archivo,"\n%d %s %d",x,buff,y);   

    fclose(archivo);

    

}


void buscarId(int id){

    persona *aux = lista;

    int d;

    if (lista == NULL)
        return;
    

    while (aux->id != id && aux->sig != lista)
        aux = aux->sig;
    
    if(aux->id == id){
        printf("\nLo sentimos esta intentando usar un ID existente\n");
        printf("Debera regresar al menu...\n\n");
        printf("Presiona 1 para regresar: ");

        if (scanf("%d",&d) == 1 && d == 1)
            menuCircular();    
        else 
            exit(1);
    
    }
}