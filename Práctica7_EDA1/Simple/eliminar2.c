void eliminar2(persona **Comienzo){

persona *obj, *obj2;
int i,x;


printf("\n\n");
printf("Introduce el ID\n");
if (scanf("%d", &x)== 1){

    

    obj = *Comienzo;

    if ((*Comienzo)->id == x){
        *Comienzo = obj->sig;
        free(obj);
    }
    else{

        while (obj != NULL && obj->id != x)
         {
             obj2 = obj;
             obj = obj->sig;

         }
         obj2->sig = obj->sig;


        free(obj);}

        printf("**Eliminado**\n\n");
        
    }

 else{
     printf("No hay elementos con ese Id\n");
     }             

}