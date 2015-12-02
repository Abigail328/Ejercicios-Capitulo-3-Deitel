/*Escriba un programa que despliegue 100 asteriscos, uno a la vez. Después de cada diez asteriscos, el programa debe
desplegar un carácter de nueva línea.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i=0;
	printf("Cuenta del 1 al 100 con asteriscos\n");
	while (i<100)
	{
		printf("*");
		i++;
		if(0==i%10)
		{
			printf("\n");
		}
	}
	getch();
}
