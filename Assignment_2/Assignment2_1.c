#include<stdio.h>

int main()
{
	int div,n,m;
	printf("Enter 2 integers for division:\n");
	scanf("%d%d",&n,&m);
	if(m!=0)
	{
		div=n/m;
		printf("Divison of 2 no.s is: %d\n",div);
	}
	else
	{
		printf("Error: Division by zero\n");
	}
	return 0;
}
