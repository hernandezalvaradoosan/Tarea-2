#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main()
{
	int uno,dos,tres;
	printf("Introduce el primer numero: ");
	scanf("%d",&uno);
	printf("\nIntroduce el segundo numero: ");
	scanf("%d",&dos);
    printf("\nIntroduce el tercer numero: ");
	scanf("%d",&tres);

	if(uno>dos & uno>tres)
	{
	printf("\n El mayor es: %d",uno);
	}
	if(dos>uno & dos>tres)
	{
	printf("\n El mayor es: %d",dos);
	}
	if(tres>uno & tres>dos)
	{
	printf("\n El mayor es: %d",tres);
	}
	return 0;
	getch();
	}
