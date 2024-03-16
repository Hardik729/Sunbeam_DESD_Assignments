#include<stdio.h>

int power(int n, int m);

int main()
{
	printf("%d\n",power(3,2));
	return 0;
}

int power(int n, int m)
{
	if(m==0)
		return 1;
	else if(m>0)
		return n*power(n,m-1);
	else
		return 1/n*power(n,-m-1);
}
