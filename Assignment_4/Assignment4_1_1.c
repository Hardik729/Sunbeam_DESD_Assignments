#include<stdio.h>

int fact(int n);
int main()
{
	printf("%d\n",fact(5));
	return 0;
}

int fact(int n)
{
	int fact=1;
	while(n>0)
	{
		fact*=n;
		n--;
	}
	return fact;
}
