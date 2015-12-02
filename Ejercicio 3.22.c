/*Escriba un programa que demuestre la diferencia entre el predecremento y el posdecremento mediante el uso del
operador --.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,a,b;
	printf("Diferencia entre predecremento y posdecremento con --\n");
	printf("Usando Predecremento\n");
	x=10;
	y=--x;
	printf("y=--x\n");
	printf("x=%d\ny=%d\n",x,y);
	printf("Usando Posdecremento\n");
	a=10;
	b=a--;
	printf("y=x--\n");
	printf("x=%d\ny=%d\n",a,b);
	getch();
}
