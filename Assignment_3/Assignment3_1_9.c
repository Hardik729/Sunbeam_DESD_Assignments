#include<stdio.h>

int main()
{
	int n,m,i=1;
	printf("Enter 2 no.s: ");
	scanf("%d%d",&n,&m);
	int p=n,q=m;
	printf("GCD using Euclidean algorithm for %d and %d is:\n",n,m);
	while(i!=0)
	{
		i=n%m;
		printf("%d %% %d = %d\n",n,m,i);
		n=m;
		m=i;
		if(n%m==0)
			return printf("GCD of %d and %d is %d\n",p,q,i);
	}
	return 0;
}
