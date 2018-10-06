#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int money;
	printf("Introduce el dinero: ");
	scanf("%d",&money);
	if(money>=1000)
	{	
		printf("\n %d billete(s) de 1000 pesos mexicanos",money/1000);
		money=money%1000;
	}
	if(money>=500)
	{	
		printf("\n %d billete(s) de 500 pesos mexicanos",money/500);
		money=money%500;
	}
	if(money>=200)
	{	
		printf("\n %d billete(s) de 200 pesos mexicanos",money/200);
		money=money%200;
	}
	if(money>=100)
	{	
		printf("\n %d billete(s) de 100 pesos mexicanos",money/100);
		money=money%100;
	}
	if(money>=50)
	{	
		printf("\n %d billete(s) de 50 pesos mexicanos",money/50);
		money=money%50;
	}
		if(money>=20)
	{	
		printf("\n %d billete(s) de 20 pesos mexicanos",money/20);
		money=money%20;
	}
		if(money>=10)
	{	
		printf("\n %d moneda(s) de 10 pesos mexicanos",money/10);
		money=money%10;
	}
		if(money>=5)
	{	
		printf("\n %d moneda(s) de 5 pesos mexicanos",money/5);
		money=money%5;
	}
		if(money>=2)
	{	
		printf("\n %d moneda(s) de 2 pesos mexicanos",money/2);
		money=money%2;
	}
		if(money>=1)
	{	
		printf("\n %d moneda(s) de 1 pesos mexicanos",money/1);
		money=money%1;
	}
	return 0;
	getch();
}
