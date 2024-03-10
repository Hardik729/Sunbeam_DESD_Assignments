#include<stdio.h>

int main()
{
	int n,m,p=1;
	printf("base: ");
	scanf("%d",&n);
	printf("index: ");
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		p*=n;
	}
	printf("Power of the %d is %d\n",n,p);
	return 0;
}
