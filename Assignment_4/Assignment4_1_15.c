#include<stdio.h>

int bin(int n);

int main()
{
	bin(20);
	printf("\n");
	return 0;
}

int bin(int n)
{
	if(n>1)
		bin(n/2);
	printf("%d",n%2);
}
