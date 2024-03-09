#include<stdio.h>

int main()
{
	int quantity, unitp=5; 
	float price=0;
	printf("Enter the no. of units to be purchased:\n");
	scanf("%d",&quantity);
	if(quantity<30)
	{
		price=unitp*quantity;
		printf("The price for %d quantities is Rs.%.2f\n",quantity,price);
	}
	else if(quantity>30)
	{
		price=unitp*quantity*0.10;
		printf("The price for %d quantities is Rs.%.2f\n",quantity,price);
	}
	else if(quantity<50)
	{
		price=unitp*quantity*0.15;
		printf("The price for %d quantities is Rs.%.2f\n",quantity,price);
	}
	else
		printf("Invalid quantity\n");
	return 0;
}
