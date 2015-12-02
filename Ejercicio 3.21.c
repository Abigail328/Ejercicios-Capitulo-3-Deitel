/*Desarrolle un programa que determine el pago bruto de cada uno de los empleados. Esta empresa paga “horas completas”
por las primeras 40 horas trabajadas por cada empleado y paga “hora y media” por todas las horas extras
trabajadas después de las 40. Usted tiene una lista de los empleados de la empresa, el número de horas que trabajó
cada empleado la semana pasada y el pago por hora de cada empleado. Su programa deberá introducir esta información
para cada empleado, y deberá determinar y desplegar el pago bruto por empleado.*/
main()
{
	float pago,salario; 
	int horas;
	while (horas!=-1)
	{
		printf("Calculo del Salario de un trabajador\n");
		printf("Introduzca el numero de horas laboradas(-1 para terminar):");
		scanf("%d",&horas);
		if (horas!=-1)
		{
			printf("Introduzca el pago por hora del empleado:");
			scanf("%f",&pago);
			if (horas>40)
			{
				salario=(40*pago)+((horas-40)*(pago*1.5));
			}
			else
			{
				salario=horas*pago;
			}			
			printf("\nEl salario es: $%.2f\n",salario);
			getch();
			system("cls");
		}
	}
	getch();
}
