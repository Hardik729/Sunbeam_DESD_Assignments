#include<stdio.h>

void ptriangle(int row);

int main()
{
	ptriangle(5);
	return 0;
}

void ptriangle(int row)
{
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
}
