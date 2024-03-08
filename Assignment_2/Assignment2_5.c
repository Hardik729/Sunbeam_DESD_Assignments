#include<stdio.h>

int main()
{
	int n,m,s,a;
	printf("Enter 3 no.s:\n");
	scanf("%d%d%d",&n,&m,&s);
	printf("Using if-else statement\n");
	if(n>m && n>s)
		printf("%d is maximum\n",n);
	else if(m>n && m>s)
		printf("%d is maximum\n",m);
	else
		printf("%d is maximum\n",s);
	printf("Using conditional operator\n");
	a = (n>m&&n>s?n:m>s?m:s);
	printf("Maximum no. is %d\n",a);
	return 0;
}
