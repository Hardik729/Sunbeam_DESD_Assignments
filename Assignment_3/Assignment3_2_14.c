#include<stdio.h>

int main()
{
	int n,temp=0;
	printf("Enter an integer: ");
	scanf("%d",&n);
	for(int i=2;i<(n/2);i++)
	{
		if(n%i==0)
		{
			temp++;
			break;
		}
	}
	if(temp==0 && n!=1)
		printf("%d is a prime no.\n",n);
	else
		printf("%d is not a prime no.\n",n);
	return 0;
}
