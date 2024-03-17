#include<stdio.h>

int add=0;
int mul=0;

void SP(int n,int m);
void SPP(int n2,int m2,int *sum,int *product);

int main()
{
	SP(5,4);
	printf("Using global variables:\n");
	printf("Addition: %d,Multiplication: %d\n ",add,mul);
	printf("Without using global variables:\n");
	int a=9,b=8,sum,product;
	SPP(a,b,&sum,&product);
	printf("Addition: %d,Multiplication: %d\n ",sum,product);
	return 0;
}

void SP(int n,int m)
{
	add=n+m;
	mul=n*m;
}

void SPP(int n2,int m2,int *sum,int *product)
{
	*sum=n2+m2;
	*product=n2*m2;
}
