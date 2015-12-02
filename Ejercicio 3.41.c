/*Escriba un programa que despliegue los múltiplos del número entero 2, a saber 2, 4, 8, 16, 32, 64, y así sucesivamente.
Su ciclo no debe terminar (es decir, debe crear un ciclo infinito).*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i=2;
	printf("Serie de 2 en 2 al infinito\n");
	while (i>0)
	{
		i+=2;
		printf("%d\n",i);
	}
	getch();
}
