/*Escriba un programa que utilice ciclos para producir la siguiente tabla de valores:
A A+2 A+4 A+6
3 5 7 9
6 8 10 12
9 11 13 15
12 14 16 18
15 17 19 21*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a=3,a1,a2,a3;
	printf("Tabla de multiplos de 3\n");
	printf("A\tA+2\tA+4\tA+6\n");
	while (a<31)
	{
		a1=a+2;
		a2=a+4;
		a3=a+6;
		printf("%d\t%d\t%d\t%d\n",a,a1,a2,a3);
		a+=3;
	}
	getch();
}
