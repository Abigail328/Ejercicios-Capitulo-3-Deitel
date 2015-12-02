/*Escriba un programa y posteriormente un programa que introduzca una serie de 10 números y determine e imprima
el mayor de éstos. [Clave: Su programa debe utilizar tres variables de la siguiente manera]:
contador: Un contador para contar los números de 1 a 10 (es decir, para llevar la cuenta de cuántos números
se han introducido y determinar si ya se procesaron los 10 números).
numero: El número actual que se introduce al programa.
mayor: El número más grande encontrado hasta el momento.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,num,may=0;
	printf("Programa que selecciona el numero mas grande\n");
	while (i<11)
	{
		printf("Escriba un numero:");
		scanf("%d",&num);
		if (may<num)
		{
			printf("El numero mayor es: %d\n",num);
			may=num;
		}
		else
		{
			printf("El numero mayor es: %d\n",may);
		}
		i++;
	}
	getch();
}
