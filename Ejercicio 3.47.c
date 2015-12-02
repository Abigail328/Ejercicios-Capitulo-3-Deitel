/*Escriba un programa que lea un entero positivo y que calcule y despliegue su factorial*/
#include <stdio.h>
#include <conio.h>
#include <float.h>
main()
{
	int f=1,n,x=1;
	printf("Programa que calcula el factorial de un numero entero\n");
	printf("Escribe un numero:\n");
	scanf("%d",&n);
	while (x<=n)
	{
		f=f*x;
		x++;
	}
	printf("\nEl factorial de %d es %d\n",n,f);
	getch();
}
