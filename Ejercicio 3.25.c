/*Escriba un programa que utilice ciclos para imprimir la siguiente tabla de valores.
N 10*N	100*N 	1000*N
1 10	100 	1000
2 20 	200 	2000
3 30 	300 	3000
4 40 	400 	4000
5 50 	500 	5000
6 60 	600 	6000
7 70 	700		7000
8 80 	800 	8000
9 90 	900 	9000
10 100 	1000 	10000*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n=1,n1,n2,n3;
	printf("Tabla de multiplos de 10*N\n");
	printf("N\t10*N\t100*N\t1000*N\n");
	while (n<11)
	{
		n1=10*n;
		n2=100*n;
		n3=1000*n;
		printf("%d\t%d\t%d\t%d\n",n,n1,n2,n3);
		n++;
	}
	getch();
}
