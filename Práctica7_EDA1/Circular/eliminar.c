void eliminar(persona **comienzo){

    int c;

    persona *aux,*ant;

    system("cls");
     
     
    if (*comienzo == NULL){
        printf(" No hay elementos para eliminar\n");
        return;    
    }

    aux = *comienzo;

    do{

        printf("%d %s %d\n",aux->id,aux->nombre,aux->edad);
        aux = aux->sig;

    } while (aux != *comienzo);

    aux = *comienzo;


    printf("\nIntroduce el Id del usuario a eliminar:\n ");

    if (scanf ("%d", &c) == 1 && c > 0){

        if (aux->id == c && aux->sig == *comienzo){
            *comienzo = NULL; 
        }
        else{

            while (aux != ult && aux->id != c){
                ant = aux;
                aux = aux->sig;
            }

            if(aux->id == c){

                if (ant == NULL)
                    *comienzo = aux->sig;
                else
                    ant->sig = aux->sig;

            }
            else
                return;


        }

        free(aux);
    }
    else
        exit(1);

}