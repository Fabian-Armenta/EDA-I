enum boolean pushPila(nodoPila **aux){

    int x;

    if(t == TAM){

        printf("La Pila está llena");

        return B_false;

    }

    else {
        printf("Ingresa un numero:\n");
        scanf("%d", &x);

        nodoPila *new = (nodoPila *)malloc(sizeof(nodoPila));

        t ++;

        new-> x = x;

        if(aux == NULL){

            new -> sig = NULL;
        }
        else{

            new -> sig = *aux;
        }

        *aux = new;

        return B_true;
    }
}