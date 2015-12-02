/*Una empresa quiere transmitir datos mediante la línea telefónica, pero les preocupa que sus teléfonos pudieran estar
intervenidos. Todos sus datos se transmiten como enteros de cuatro dígitos. A usted le pidieron que escriba un
programa que encripte sus datos de manera que se transmitan de forma más segura. El programa debe leer un entero
de cuatro dígitos y encriptar la información de la siguiente manera: reemplace cada dígito con el residuo de la
división entre 10 de la suma de dicho dígito más 7. Posteriormente, intercambie el primer dígito con el tercero, e
intercambie el segundo dígito con el cuarto. Luego despliegue el entero encriptado. Escriba un programa por separado
que introduzca un entero encriptado de cuatro dígitos y lo desencripte para formar el número original.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int n,e,d1,d2,d3,d4,tmp1,tmp2,tmp3,tmp4,cam1,cam2,cam3,cam4,sum1,sum2,sum3;
	printf("Programa de Encriptacion\n");
	printf("Escriba el Numero entero de 4 digitos a encriptar:\n");
	scanf("%d",&n);
	if (n>9999||n<1000)
	{
		printf("El numero no es valido");
	}
	else
	{
		d1=n/1000;
		d2=n%1000/100;
		d3=n%1000%100/10;
		d4=n%1000%100%10/1;
		tmp1=(d1+7)%10;
		tmp2=(d2+7)%10;
		tmp3=(d3+7)%10;
		tmp4=(d4+7)%10;
		cam1=tmp3;
		cam2=tmp4;
		cam3=tmp1;
		cam4=tmp2;
		sum1=cam1*1000;
		sum2=cam2*100;
		sum3=cam3*10;
		e=sum1+sum2+sum3+cam4;
		printf("El numero encriptado es:\n%d",e);
		printf("\n\n*Nota: Si aparecen solo 3 numeros, el primer numero es 0");
	}
	getch();
}
