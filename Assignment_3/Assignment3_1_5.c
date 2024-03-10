#include<stdio.h>

int main()
{
	int fact=1,n,i=0;
	printf("Enter a number for factorial calculation:\n");
	scanf("%d",&n);
	i=n;
	while(i>0)
	{
		fact*=i;
		i--;
	}
	printf("Factorial of %d is %d\n",n,fact);
	return 0;
}
