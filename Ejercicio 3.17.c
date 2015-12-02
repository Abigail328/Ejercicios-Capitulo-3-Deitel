/*Los conductores están preocupado por el kilometraje obtenido en sus automóviles. Un conductor mantiene el
registro de muchos llenados de tanque de gasolina mediante el registro de miles de kilómetros conducidos y los
litros empleados durante cada llenado del tanque. El programa debe calcular y desplegar los kilómetros por litro
obtenidos durante cada llenado de tanque. Después de procesar toda la información, el programa debe calcular y
desplegar los kilómetros por litro combinados de todos los llenados de tanque.*/
#include<stdio.h>
#include<conio.h>
#include<float.h>
main()
{
	float litros,km,kpl,promedio=0,r;	/*kpl=kilometros por litro*/
	int i=0;
	printf("Calculo de Kilometros por litro y promedio\n");
	while (litros!=-1)
	{
		printf("Introduzca los litros utilizados (-1 para terminar):");
		scanf("%f",&litros);
		if (litros!=-1)
		{
			printf("Introduzca los kilometros conducidos:");
			scanf("%f",&km);
			kpl=km/litros;
			printf("Los kilometros por litro de este tanque fueron %f\n",kpl);
			promedio += kpl;
			i++;
		}
	}
	r=promedio/i;
	printf("\nEl promedio general de kilometros/litro fue %f",r);
	getch();
}
