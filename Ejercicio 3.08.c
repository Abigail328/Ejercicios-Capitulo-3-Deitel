/*Escriba un programa en C que utilice las instrucciones del ejercicio 3.7 para calcular x a la potencia y. El programa
debe tener una instrucción de repetición while.*/
/*3.7 a) Introducir la variable entera x mediante scanf.
b) Introducir la variable entera y mediante scanf.
c) Inicializar la variable entera i en 1.
d) Inicializar la variable entera potencia en 1.
e) Multiplicar la variable potencia por x y asignar el resultado a potencia.
f) Incrementar la variable i en 1.
g) Verificar i para ver si es menor o igual que y en la condición de una instrucción while.
h) Mostrar la variable entera potencia mediante printf.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,i=1,potencia=1;
	printf("Programa que calcula x a la potencia y\n");
	printf("Escriba el valor de x:\n");
	scanf("%d",&x);
	printf("Escribe el valor de y:\n");
	scanf("%d",&y);
	while (i<=y)
	{
		potencia *= x;
		i++;
	}
	printf("\nEl resultado es: %d",potencia);
	getch();
}
