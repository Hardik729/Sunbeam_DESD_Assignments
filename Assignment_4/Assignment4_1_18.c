#include<stdio.h>

void swap(int *a,int *b);

int main()
{
	int n1=65,n2=56;
	printf("No.s before swapping: %d, %d\n",n1,n2);
	swap(&n1,&n2);
	printf("No.s after swapping: %d, %d\n",n1,n2);
	return 0;
}

void swap(int *a,int *b)
{
	int temp=*b;
	*b=*a;
	*a=temp;
}
