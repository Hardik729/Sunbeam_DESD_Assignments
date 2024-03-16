#include<stdio.h>

void fib(int n);

int main()
{
	fib(5);
	return 0;
}

void fib(int n)
{
	int n1=0,n2=1,fibo=0;
	if(n==0 || n==1)
		printf("%d",n);
	printf("%d %d",n1,n2);
	for(int i=2;i<n;i++)
	{
		fibo=n1+n2;
		n1=n2;
		n2=fibo;
		printf(" %d",fibo);
	}
}
