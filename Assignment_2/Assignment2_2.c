#include<stdio.h>

int main()
{
	int n;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Entered no. is even\n");
	}
	else
	{
		printf("Entered no. is odd\n");
	}
	return 0;
}
