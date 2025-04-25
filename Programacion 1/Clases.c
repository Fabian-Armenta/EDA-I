#include <stdio.h> //Creado por Fabian Armenta
#define	sumar	1
#define	restar	2
#define	multiplicar	3
#define	dividir	4
int main()
{ 
float a, b;
char op;
printf("+ =1, - =2, * =3 o / =4\n Ingrese operacion: ");
scanf("%s", &op);
printf("Ingrese a: ");
scanf("%f", &a);
printf("Ingrese b: ");
scanf("%f", &b);
switch (op) {
case '1':
printf("resultado = %.2f", a + b);
break;
case '2':
printf("resultado = %.2f", a - b);
break;
case '3':
printf("resultado = %f", a * b);
break;
case '4':
if (b ==0){
printf("El resultado es invalido");
}
else {
    printf("resultado = %f\n", a / b);
}
break;
}
}