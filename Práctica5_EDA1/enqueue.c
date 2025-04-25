enum boolean enqueue(nodoCola **auxHead, nodoCola **auxCola){

    int x;

    printf("Ingresa un numero\n");
    scanf("%d", &x);

    if(t == TAM){

        printf("No se puede encolar");

        return B_false;
    }
    else{

        nodoCola *new = (nodoCola *)malloc(sizeof(nodoCola));

        new->x = x;

        new->sig = NULL;

        if(*auxHead == NULL){
            *auxCola = new;
            *auxHead = new;
        }
        else{
            (*auxCola)->sig = new;
            *auxCola = (*auxCola)->sig;
        }

        t ++;

        return B_true;
    }



}