#include<stdio.h>

int main()
{
	int n,m,a;
	printf("Entered 2 integers:\n");
	scanf("%d%d",&n,&m);
	printf("Using if else conditional statement\n");
	if(n>m)
		printf("%d is greater than %d\n",n,m);
	else		
		printf("%d is greater than %d\n",m,n);
	printf("Using conditional operator:\n");
	a = (n>m?n:m);
	printf("Max of 2 no.s is %d\n",a);
	return 0;
}
