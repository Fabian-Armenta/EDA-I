#include <stdio.h>
#include <stdlib.h>

int a=0, regresar, opciones;
int menu();
int programa();

int main(){
    programa();
    return 0;
}

int menu(){
    int opciones=0;
    printf("Seleccione un numero\n",22);
    printf("1 = Calcular la serie numerica 1 + 3 + 5 + ... + n\n");
    printf("2 = Calcular 1 * 3 * 5 * ... * n\n");
    printf("3 = Salir del programa\n");
    printf("Opcion:",22);
    scanf("%d", &opciones);
    if (opciones == 1 || opciones == 2 || opciones == 3)
    {
        return opciones;
    }
    else{
printf("Opcion incorrecta", 22);
return menu();
    }

}

int serienum(int *a){
    int i = 1,suma = 0;
 printf("%d",*a);
    do
    {
        if (i%2 != 0)
        {
            suma += i;  
        }
        i++;
        
    } while (i < *a);

    return suma + *a;
}
int multiplicar(int *a){
    int i = 1,producto = 1;
   printf("%d",a);
    do
    {
        if (i%2 != 0)
        {
            producto = producto * i;  
        }
        i++;
        
    } while (i < *a);

    return producto * *a;
}
int evaluarImpar(int *c){
    int b = 2;
    if (*c%2 != 0 && *c > 0 && *c < 20)
    {
       return *c;       
    }
    else
    {   

        do
        {
            printf("Tu numero es incorrecto\n");
            printf("Por favor ingresa de nuevo el numero: ");
            scanf("%d",&b);
        } while (b%2 == 0);

        return b;
    }
    
}
int volver(int x){
    if (x == 1)
    {   
        return programa();
    }
    else
    {   
    
        printf("\n\nHasta luego\n");
        exit(0);
    }
    
    
}
int programa(){

        printf("Introduce el numero impar que desees del 1 al 19: ");
        scanf("%d",&a);

        a = evaluarImpar(&a);
     
        opciones = menu();

        switch (opciones){
            case 1:
                printf("La suma hasta %d es: %d\n\n",a,serienum(&a));
                printf("Introducir otro numero = 1, salir = 0 ");
                scanf("%d",&regresar);
                volver(regresar);
                break;

            case 2:
                printf("El producto hasta %d es: %d\n",a,multiplicar(&a));
                printf("Introducir otro numero = 1, salir = 0 ");
                scanf("%d",&regresar);
                volver(regresar);
                break;
            case 3:
                volver(0);
                break;
        }
    return 0;    
}