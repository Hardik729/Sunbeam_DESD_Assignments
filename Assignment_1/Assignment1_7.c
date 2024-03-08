#include<stdio.h>

int main()
{
	int n,m=1000,q;
	int n1, n2, n3, n4;
	printf("Enter a 4 digit no.");
	scanf("%d",&n);
	int r=n,z=n;
	printf("Face value of each digit in the given no.\n");
	for(int i=0;i<4;i++)
	{
		q=n/m;
		printf("%d\t",q);
		n=n%m;
		m=m/10;
	}
	printf("\nPlace value of each digit in the given no.\n");
	n1=r%10;
	r=r/10;
	n2=r%10;
	r=r/10;
	n3=r%10;
	r=r/10;
	n4=r%10;
	r=r%10;
	printf("%d=%d+%d+%d+%d\n",z,(n4*1000),(n3*100),(n2*10),n1);
	printf("\n%d%d%d%d",n1,n2,n3,n4);
	return 0;
}
