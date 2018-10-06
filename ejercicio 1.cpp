#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int modulo,num;
	printf("Introduce el numero: ");
	scanf("%d",&num);
	modulo=num%2;
	if(modulo==0)
	{
		printf("\nel numero es par");
	}
	else
	{
		printf("\nel numero es impar");
	}
	return 0;
	getch();
}
