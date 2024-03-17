#include<stdio.h>

int fibo(int n);
void printfib(int n);

int main()
{
	printfib(5);
	return 0;
}

int fibo(int n)
{
	if(n<=1)
		return n;
	return fibo(n-1)+fibo(n-2);
}

void printfib(int n)
{
	for(int i=0;i<n;i++)
		printf("%-2d",fibo(i));
	printf("\n");
}
