/*Una gran empresa de productos químicos le paga a sus vendedores mediante un esquema de comisiones. Los vendedores
reciben $200 semanales más el 9% de sus ventas totales durante la semana. Por ejemplo, un vendedor que
vende $5000 de productos químicos durante la semana recibe $200 más el 9% de $5000, o un total de $650. Desarrolle
un programa que introduzca las ventas totales de cada vendedor durante la última semana y que calcule y
despliegue los ingresos de ese vendedor. Procese las cantidades de un vendedor a la vez.*/
#include<stdio.h>
#include<conio.h>
#include<float.h>
main()
{
	float ventas,salario,comision; 
	while (ventas!=-1)
	{
		printf("Calculo de Salario de Vendedores \n");
		printf("Introduzca las ventas en pesos(-1 para terminar):");
		scanf("%f",&ventas);
		if (ventas!=-1)
		{
			comision=ventas*.09;
			salario=200.00+comision;
			printf("\nEl salario es: $%.2f\n",salario);
			getch();
			system("cls");
		}
	}
	getch();
}
