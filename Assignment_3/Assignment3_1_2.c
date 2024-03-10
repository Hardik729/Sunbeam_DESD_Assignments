#include<stdio.h>

int main()
{
	int n,i=1;
	printf("Enter a no. to display its table: ");
	scanf("%d",&n);
	printf("Multpilcation table for the given no. %d is:\n",n);
	while(i<=10)
	{
		printf("%dx%d=%d\n",n,i,(n*i));
		i++;
	}
	return 0;
}
