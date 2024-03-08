#include<stdio.h>

int main()
{
	int n1,n2,n3,sum=0;
	printf("Enter 3 no.s: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	sum=n1+n2+n3;
	printf("Average=%d\n",(sum/3));
	return 0;
}
