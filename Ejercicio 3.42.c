/*Escriba un programa que lea el radio de un circulo (como un valor float) y que calcule y despliegue el diametro,
la circunferencia y el area. Utilice el valor 3.14159 para pi.*/
#include <stdio.h>
#include <conio.h>
#include <float.h>
main()
{
	printf("Programa que calcula el diametro, circunferencia y area de un circulo\n");
	float r,d,pi=3.14159,c,a;
	printf("Escriba el radio del circulo: \n");
	scanf("%f",&r);
	d=r*2;
	c=d*pi;
	a=pi*(r*r);	
	printf("Diametro del circulo: %f\n",d);
	printf("Circunferencia del circulo: %f\n",c);
	printf("Area del circulo: %f\n",a);
	getch();
}
