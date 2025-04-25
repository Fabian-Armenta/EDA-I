#include <stdlib.h> //Fabian Armenta
#include <stdio.h>
 int a, b, i;
 int suma();
 char nombre[20];
int opcion, resultado;
int saludo(){
printf("Escribe tu nombre: ");
scanf("%s", nombre);
printf("hola, %s, es un gusto saludarte\n", nombre);
}
int menu(){
printf("1 suma 2 resta 3 multi 4 division: \n");
scanf("%d", &opcion);
printf("Introduce a: \n");
scanf("%d", &a);
printf("Introduce b: ");
scanf("%d", &b);
}
int suma() {
    a+b;
}

int multi() {
   a* b;
}

int resta() {
 a - b;
}

int division() {
    a / b;
}

int EsPar(int resultado){
if(resultado%2==0)
return 1;
else
return 0;
}

int EsImpar(int resultado){
if(resultado%2 != 0)
return 1;
else
return 0;

}
int main() {
saludo();
menu();
switch (opcion)
{
case 1:
suma();
printf("resultado = %d", a+b);
break;
    case 2:
   	resta();
printf("resultado = %d", a -b);
break;
    case 3:
   	 multi();
printf("resultado = %d", a*b);
break;

    case 4:
   	 division();
printf("resultado = %d", a/b);
break;
    default: 
printf("Opcion no valida");
   	 break;
    }
if (&resultado > 0) {
   	 if (EsPar(resultado)) {
   		 for (int i=0; i < resultado; i++);
   		printf("\nContando para salir", i);
   			 return 0;
   	 }
   	 else
   		 EsImpar(resultado);
   		 return 0;
            
    }
    else
   	printf("\nNo hay nada mas que hacer");
   	 return 0;
}
