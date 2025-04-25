void llenarHashtags(hashtags **Comienzo, FILE *archivo ){

    int x, t=0;;
    char Hashtag[50];
    archivo = fopen("hashtags.txt", "r");


    while (!feof(archivo))
    {
        hashtags *nodo = (hashtags*)malloc(sizeof(hashtags));
        fscanf(archivo, "%d", &x);
        fscanf(archivo, "%s", Hashtag);

        nodo->id = x;
        strcpy(nodo->etiqueta, Hashtag);
        nodo->sig = NULL;

        if( *Comienzo == NULL)
            *Comienzo = nodo;

        else{
            hashtags *aux = *Comienzo;
            while (aux->sig != NULL)
            {
                aux = aux->sig;
                t++;
            }

            aux->sig = nodo;
        
        }    
    }

    fclose(archivo);
    
}