#include<stdio.h>

int power(int n,int o);

int main()
{
	printf("Power of %d with index %d is %d\n",5,3,power(5,3));
	return 0;
}

int power(int m,int o)
{
	int x=1;
	while(o>0)
	{
		x*=m;
		o--;
	}
	return x;
}
