void mostrarHashtags(hashtags **comienzo){

    hashtags *aux = *comienzo;
   
    if (*comienzo == NULL){
        
        printf("\n No hay Hashtags \n\n");
        

    }

    else {

           while (aux != NULL){

        printf("\t%d %s\n\n",aux->id,aux->etiqueta);
        aux = aux->sig;

    }
        
    
    }
}