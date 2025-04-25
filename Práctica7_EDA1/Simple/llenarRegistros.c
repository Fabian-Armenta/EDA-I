void llenarRegistros(persona **Comienzo,FILE *archivo){

    int x,y;
    char buff[10];
    archivo = fopen("archivo.txt", "r");

    while (!feof(archivo)){

        persona *nodo = (persona*)malloc(sizeof(persona));
        fscanf(archivo,"%d",&x);
        fscanf(archivo,"%s",buff);
        fscanf(archivo,"%d",&y);

        nodo->id = x;
        strcpy(nodo->nombre,buff);
        nodo->edad = y;
        nodo->sig = NULL;

        if(*Comienzo == NULL)
            *Comienzo = nodo;
        else{
            persona *aux = *Comienzo;

            while (aux->sig != NULL){
                aux = aux->sig;
            }

            aux->sig = nodo;

        }
    }
    
    fclose(archivo);
}