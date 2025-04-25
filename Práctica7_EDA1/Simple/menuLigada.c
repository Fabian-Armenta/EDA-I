void menuLigada(){
    int op = 0;
    persona *persona;
     system("cls");
    while (1)
    {
        printf("****************************************************************\n");
        printf("Bienvenido a la Lista Simple\n Menu:\n");
        printf(" 1 --> Insertar \n 2 --> Buscar\n 3 --> Eliminar\n 4 --> Mostrar\n 5 --> Menu Principal\n");
        printf("****************************************************************\n");
        printf("Selecciona una opcion:\n");

            if (scanf("%d", &op) == 1){
                switch (op) {
                case 1:

                     agregarNodo(&lista,ptr);

                    break;

                case 2:

                    buscar(&lista);
                    break;

                case 3:
                    
                    eliminar2(&lista);
                    
                    break;

                case 4:
                    
                    imprimirLista(&lista);
                    break;

                case 5:

                    system("cls");
                    return;    

                default:
                    printf("Opcion incorrecta\n Regresando al menu principal!\n");
                    return;    
                }
            }
            
    }
    




}