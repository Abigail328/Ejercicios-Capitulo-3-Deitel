/*Escriba un programa que utilice un ciclo para imprimir los números 1 a 10 dentro de la misma línea, separados cada
uno por tres espacios en blanco.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	printf("Numeros del 1 al 10\n");
	while (i<11)
	{
		printf("%d   ",i);
		i++;
	}
	getch();
}
