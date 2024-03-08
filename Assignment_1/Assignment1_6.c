#include<stdio.h>

int main()
{
	int n;
	printf("Enter an integer value: ");
	scanf("%d",&n);
	printf("Table for the entered no.\n");
	for(int i=1;i<11;i++)
	{
		printf("%dx%d=%d\n",n,i,(n*i));
	}
	return 0;
}
