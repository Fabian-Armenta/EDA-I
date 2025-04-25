void menuCircular(){
    int op = 0;

    persona *persona;

    system("cls");

    while (1){


        printf("****************************************************************\n");
        printf("Bienvenido a la Lista Circular\n Menu:\n");
        printf(" 1 --> Insertar \n 2 --> Buscar\n 3 --> Eliminar\n 4 --> Mostrar\n 5 --> Menu Principal\n");
        printf("****************************************************************\n");
        printf("Selecciona una opcion:\n");

            if (scanf("%d", &op) == 1){

                switch(op){

                    case 1:
                        agregarNodoCircular(&lista , &ult, ptr);
                        break;

                    case 2:
                        buscarCircular(&lista);
                        break;

                    case 3:
                        
                        eliminar(&lista);   
                        break;

                    case 4:
                        
                        imprimirListaCircular(&lista, &ult);

                        break;
                        
                    case 5:
                        system("cls");
                        return;    
    
                }
            }
            else {
                printf("Opcion invalida\n");
                break;
            }
            
    }

}