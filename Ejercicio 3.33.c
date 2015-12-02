/*Escriba un programa que lea la medida de uno de los lados de un cuadrado y que despliegue dicho cuadrado con
asteriscos. Su programa debe trabajar con cuadrados de tamaño entre 1 y 20. Por ejemplo, si su programa lee un
tamaño 4, debe desplegar:
****
****
****
****
*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n,l=1;
	printf("Programa que crea cuadrados\n");
	printf("Eliga el tamaño del cuadrado:");
	scanf("%d",&n);
	printf("\n");
	if(n>20)
	{
		printf("No se puede de ese tamaño\n");
	}
	else
	{
		while (l<=n)	
		{
			i=1;
			while (i<=n)
			{
				printf("*");
				i++;
			}
			printf("\n");
			l++;
		}
	}
	getch();
}
