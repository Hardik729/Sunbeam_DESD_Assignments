#include<stdio.h>
#include<math.h>

int main()
{
	int n,count=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(count<5)
	{
		n++;
		if(n==1 || n==0)
			continue;
		int is_prime=1;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
			 	is_prime=0;
				break;
			}
		}
		if(is_prime)
		{
			count++;
			printf("%d ",n);
		}
	}
	printf("\n");
	return 0;
}
