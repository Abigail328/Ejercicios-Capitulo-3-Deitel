/*Modifique el programa que escribió en el ejercicio 3.33 de manera que despliegue el perímetro del cuadrado. Por
ejemplo, si su programa lee un tamaño 5, debe desplegar:
*****
*   *
*   *
*   *
*****
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
			if (l==1||l==n)
			{
				while(i<=n)
				{
					printf("*");
					i++;
				}
			}
			else
			{
				while(i<=n)
				{
					if (i==1||i==n)
					{
						printf("*");
						i++;
					}
					else
					{
						printf(" ");
						i++;
					}
				}
			}
			printf("\n");
			l++;
		}
	}
	getch();
}
