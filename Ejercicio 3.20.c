/*El interés simple para un préstamo se calcula mediante la fórmula:
interés = préstamo * tasa * días / 365;
La fórmula anterior asume que tasa es la tasa de interés anual, y por lo tanto incluye la división entre 365 (días). Desarrolle
un programa que introduzca préstamo, tasa y días para varios préstamos, y que calcule y despliegue el
interés simple para cada préstamo, utilizando la fórmula anterior.*/
#include<stdio.h>
#include<conio.h>
#include<float.h>
main()
{
	float prestamo,tasa,interes; 
	int dias;
	while (prestamo!=-1)
	{
		printf("Calculo de Interes para un prestamo\n");
		printf("Introduzca el monto del prestamo(-1 para terminar):");
		scanf("%f",&prestamo);
		if (prestamo!=-1)
		{
			printf("Introduzca la tasa de interes:");
			scanf("%f",&tasa);
			printf("Introduzca el periodo del prestamo en dias:");
			scanf("%d",&dias);
			interes=prestamo*tasa*dias/365;
			printf("\nEl monto del interes es: $%.2f\n",interes);
			getch();
			system("cls");
		}
	}
	getch();
}
