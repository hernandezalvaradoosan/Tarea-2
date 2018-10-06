#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
	int modulo,num,elev;
	printf("Introduce el numero: ");
	scanf("%d",&num);
	modulo=num%2;
	if(modulo==0)
	{
		printf("\nEl numero es par");
		elev=pow(num,2);
			printf("\nEl numero elevado al cuadrado es: %d ",elev);
	}
	else
	{
		printf("\nEl numero es impar");
		elev=pow(num,3);
			printf("\nEl numero elevado al cubo es: %d ",elev);
	}
	return 0;
	getch();
}
