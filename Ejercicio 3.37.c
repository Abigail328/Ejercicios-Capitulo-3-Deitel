/*Escriba un programa mediante un ciclo while que cuente de 1 a 300,000,000 por unos. Cada vez que la cuenta alcance un múltiplo de 100,000,000
despliegue dicho número en la pantalla.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	printf("Serie del 1 al 300,000,000\n");
	while (i<=300000000)
	{
		i++;
		if(0==i%100000000)
		{
			printf("%d\n",i);
		}
	}
	getch();
}
