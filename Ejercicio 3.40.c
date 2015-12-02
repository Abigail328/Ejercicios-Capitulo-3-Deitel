/*Escriba un programa que despliegue el siguiente patrón en la pantalla:
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
El programa sólo debe utilizar tres instrucciones de salida, una de cada una de las siguientes formas:
printf( “* “);
printf( “ “);
printf( “\n“);*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i=0;
	while (i<64)
	{
		printf("* ");
		i++;
		if(0==i%8)
		{
			printf("\n");
			if(i==8||i==24||i==40||i==56)
			{
			printf(" ");
			}
		}
	}
	getch();
}
