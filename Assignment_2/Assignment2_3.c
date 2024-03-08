#include<stdio.h>

int main()
{
	int n;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	if(n>0)
		printf("Entered no. %d is positive\n",n);
	else if(n<0)
		printf("Entered no. %d is negative\n",n);
	else
		printf("Entered no. %d is zero\n",n);
	return 0;
}
