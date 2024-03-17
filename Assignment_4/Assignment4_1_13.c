#include<stdio.h>

int gcd(int n,int m);

int main()
{
	printf("GCD of the given 2 no.s is: %d\n",gcd(12,24));
	return 0;
}

int gcd(int n,int m)
{
	if(m==0)
		return n;
	else
		return gcd(m,n%m);
}
