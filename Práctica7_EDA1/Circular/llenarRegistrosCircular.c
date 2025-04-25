void llenarRegistros(persona **Comienzo,persona **ult, FILE *archivo){

    int x,y;
    char buff[10];
    
    archivo = fopen("archivo.txt", "r");

    while (1){

        if (feof(archivo))
            break;

        persona *nodo = (persona*)malloc(sizeof(persona));
        fscanf(archivo,"%d",&x);
        fscanf(archivo,"%s",buff);
        fscanf(archivo,"%d",&y);

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
           *ult = nodo;
           (*ult)->sig = *Comienzo;
        }
    }
    
    fclose(archivo);
}