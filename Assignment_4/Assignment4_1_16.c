#include<stdio.h>

void hexd(int n);

int main()
{
	hexd(56);
	printf("\n");
	return 0;
}

void hexd(int n)
{
	if(n>0)
	{
		hexd(n/16);
		int rem=n%16;
		if(rem<10)
			printf("%d",rem);
		else
			printf("%c",n-10+'A');
	}
}
