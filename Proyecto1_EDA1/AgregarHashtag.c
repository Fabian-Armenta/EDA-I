void buscarId(int);
void Hashtags();
void AgregarHashtags(hashtags **Comienzo, FILE *archivo){

   int x, t,c;
    char Hashtag[50];
    archivo = fopen("hashtags.txt", "r");

    system("cls");

    if (t == TAM){
        printf("\nYa hay 5 top Hashtags\n\n");
    }
    else{
        
        do{
            system("cls");
            printf("Introduce el top: \n");
            if(scanf("%d",&x)){
                buscarId(x);}      
            else{
                printf("Opcion no valida\n\nSaliendo del programa...\n");
                exit(1);
            }

        }while(x < 0);

        printf("\nIntroduce tu hashtag:\n");
        if (scanf("%s",Hashtag) != 1 || strlen(Hashtag) > 50)
            exit(1);

        hashtags *nodo = (hashtags*)malloc(sizeof(hashtags));
        t ++;    

        nodo->id = x;
        strcpy(nodo->etiqueta, Hashtag);

        
        if (*Comienzo == NULL){
            nodo->sig = NULL;    

        }
        else{
            nodo->sig = *Comienzo;
        }

        *Comienzo = nodo;

        printf("\n\n**  Agregado  **\n\n");
        printf("Presiona 1 para regresar: ");

        if (scanf("%d",&c) == 1 && c == 1){
            system("cls");
            Hashtags(5);    }
        else 
            exit(1);


    }

    







    fprintf(archivo, "\n%d %s", x, Hashtag);
    fclose(archivo);
}

void buscarId(int id){

    hashtags *aux = et;

    int a=0, c;

    if (et == NULL)
        return;
    

    while(aux != NULL && !a){
		if(aux -> id == id){
					a =1;
		}else{
				
                    aux = aux -> sig;
		}
    }

if (a){
     printf("\nLo sentimos esta intentando usar un Top existente\n");
        printf("Debera regresar\n\n");
        printf("Presiona 1 para regresar: ");

        if (scanf("%d",&c) == 1 && c == 1)
            Hashtags(5);    
        else 
            exit(1);

    
    }
else{
    return;
}    
    

}