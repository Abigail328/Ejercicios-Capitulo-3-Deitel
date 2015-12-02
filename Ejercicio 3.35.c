/*Un palíndromo es un número o una frase de texto que se lee igual hacia delante y hacia atrás. Por ejemplo, cada
uno de los siguientes números de cinco dígitos, son palíndromos: 12321, 55555, 45554, y 11611. Escriba un programa
que lea números de cinco dígitos y que determine si es o no, un palíndromo.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,y1,y2,y3,y4,y5;
	printf("Programa para saber si un numero es palindromo\n");
	printf("Introduzca un numero de 5 cifras:\n");
	scanf("%d",&n);
	if(n<10000||n>99999)
	{
		printf("El numero no es valido\n");
	}
	else
	{
		y1=n/10000;
		y2=n%10000/1000;
		y3=n%10000%1000/100;
		y4=(n%10000%1000%100)/10;
		y5=((n%10000)%1000)%100%10/1;
		if(y1==y5&&y2==y4)
		{
			printf("El numero es un palindromo");
		}
		else
		{
			printf("El numero no es un palindromo");
		}
	}
	getch();
}
