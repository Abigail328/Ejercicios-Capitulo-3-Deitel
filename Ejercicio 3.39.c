/*Escriba un programa que lea un número entero y que determine y despliegue cuántos dígitos del entero son sietes.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,s=0;
	printf("Porgrama que dice cuantos digitos son 7 en un numero entero(hasta 10 digitos)\n");
	printf("Escriba el numero entero:\n");
	scanf("%d",&n);
	if (n>9999999999)
	{
		printf("Numero no valido");
	}
	else
	{
		n1=n/1000000000;
		n2=n%1000000000/100000000;
		n3=n%1000000000%100000000/10000000;
		n4=n%1000000000%100000000%10000000/1000000;
		n5=n%1000000000%100000000%10000000%1000000/100000;
		n6=n%1000000000%100000000%10000000%1000000%100000/10000;
		n7=n%1000000000%100000000%10000000%1000000%100000%10000/1000;
		n8=n%1000000000%100000000%10000000%1000000%100000%10000%1000/100;
		n9=n%1000000000%100000000%10000000%1000000%100000%10000%1000%100/10;
		n10=n%1000000000%100000000%10000000%1000000%100000%10000%1000%100%10/1;
		if(n1==7)
		{
			s++;
		}
		if(n2==7)
		{
			s++;
		}
		if(n3==7)
		{
			s++;
		}
		if(n4==7)
		{
			s++;
		}
		if(n5==7)
		{
			s++;
		}
		if(n6==7)
		{
			s++;
		}
		if(n7==7)
		{
			s++;
		}
		if(n8==7)
		{
			s++;
		}
		if(n9==7)
		{
			s++;
		}
		if(n10==7)
		{
			s++;
		}
		printf("\nEl numero de 7 en el numero entero es %d",s);
	}
	getch();
}
