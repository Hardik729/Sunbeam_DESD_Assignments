#include<stdio.h>

int main()
{
	int row;
	printf("Enter the no. of rows: ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++)
	{
		for(int s=row-i+1;s>0;s--)
			printf(" ");
		int coeff=1;
		for(int j=1;j<=i;j++)
		{
			printf("%2d",coeff);
			coeff=coeff*(i-j)/j;
		}
		printf("\n");
	}
	return 0;
}
