#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int Calificacion;
	printf("Introduce la Calificacion: ");
	scanf("%d",&Calificacion);
	if(Calificacion>=70)
	{
		printf("\nFelicidades has aprobado");
	}
	else
	{
		printf(" \nContinua con tus estudios, necesitas esforzarte mas");
	}
	return 0;
	getch();
}
