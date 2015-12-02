/*Desarrolle un programa en C que determine si un cliente de una tienda departamental excede el límite de crédito
de su cuenta. Para cada cliente, se dispone de los siguientes datos:
1. Número de cuenta.
2. Saldo al inicio del mes.
3. Total de elementos cargados al cliente en este mes.
4. El total de los créditos aplicados a la cuenta del cliente durante el mes.
5. El límite de crédito autorizado.
El programa debe introducir cada uno de estos datos, calcular el nuevo saldo (= saldo inicial + cargos – créditos),
y determinar si el nuevo saldo excede el límite de crédito del cliente. Para aquellos clientes que excedan el límite
de crédito, el programa debe desplegar el número de cuenta, el límite de crédito, el saldo nuevo y el mensaje “Límite
de crédito excedido”.*/
#include<stdio.h>
#include<conio.h>
#include<float.h>
main()
{
	/* si=saldo inicial,tcar=total de cargos, tcre=total de creditos,lim=limite de credito, ns= nuevo saldo */ 
	float si,tcar,tcre,lim,ns; 
	int nc; /* nc= numero de cuenta */
	while (nc!=-1)
	{
		printf("Calculo de Credito de Clientes\n");
		printf("Introduzca el numero de cuenta(-1 para terminar):");
		scanf("%d",&nc);
		if (nc!=-1)
		{
			printf("Introduzca el saldo inicial:");
			scanf("%f",&si);
			printf("Introduzca el total de cargos:");
			scanf("%f",&tcar);
			printf("Introduzca el total de creditos:");
			scanf("%f",&tcre);
			printf("Introduzca limite de credito:");
			scanf("%f",&lim);
			ns=si+tcar-tcre;
			system("cls");
			printf("Cuenta: %d\n",nc);
			printf("Limite de Credito: %.2f\n",lim);
			printf("Saldo: %.2f\n",ns);
			if (ns>lim)
			{
				printf("Limite de Credito excedido.");
				getch();
				system("cls");
			}
			getch();
			system("cls");
		}
	}
	getch();
}
