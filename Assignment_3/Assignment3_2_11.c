#include<stdio.h>

int main()
{
	int fact=1,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=n;i>0;i--)
		fact*=i;
	printf("Factorial of %d is %d\n",n,fact);
	return 0;
}
