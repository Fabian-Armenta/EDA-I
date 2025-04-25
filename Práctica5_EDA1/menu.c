void menu(){
    int op = 0; 
    while(1){
    printf("****************************************************************\n");
    printf("Bienvenido\n Menu:\n");
    printf(" 1 --> Ir a la Pila \n 2 --> Ir a la Cola\n 3 --> Salir\n");
    printf("****************************************************************\n");
    printf("Selecciona una opcion:\n");
    
        if (scanf("%d", &op) == 1){

            switch(op){
                case 1:
                    menuPila();
                    break;

                case 2:
                    menuCola();
                    break; 

                case 3:
                    printf("Gracias por tu visita\n Adios!\n");
                    return;       
            }
            }
         else {
            printf("Opcion no valida\n Adios!\n");
            break;
            }    
}
}