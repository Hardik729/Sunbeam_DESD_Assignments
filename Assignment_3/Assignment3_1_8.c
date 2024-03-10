#include<stdio.h>

int main()
{
	int n,i=2;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d = ",n);
	while(n%i==0)
	{
		printf("%d * ",i);
		n=n/i;
	}
	i=3;
	while(i<=n/2)
	{
		while(n%i==0)
		{
			printf("%d * ",i);
			n=n/i;
		}
		i=i+2;
	}
	if(n>2)
		printf("%d",n);
	printf("\n");
	return 0;
}
