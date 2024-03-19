#include<stdio.h>

int main()
{
	printf("First pattern:\n");
	for(int i=1;i<=5;i++)
	{
		for(int j=0;j<i;j++)
			printf("*");
		printf("\n");
	}
	printf("Second pattern:\n");
	for(int i=5;i>0;i--)
	{
		for(int j=0;j<i;j++)
			printf("*");
		printf("\n");
	}
	printf("Third pattern:\n");
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
	printf("Fourth pattern\n");
	for(int i=1;i<=5;i++)
	{
		int n=5;
		for(int j=0;j<i;j++)
		{
			printf("%d",n);
			n--;
		}
		printf("\n");
	}


	printf("Fifth pattern\n");
	int  i,j,k,z=0;
	char ch='G';
	for(i=7;i>0;i--)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(k=7;k>i;k--)
		{
			printf("%c",ch);
			ch--;
		}
		ch='G';
		printf("\n");
	}

	char ch1='A';
	printf("Sixth pattern\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<i+1;j++)
			printf("%c",ch1++);
		printf("\n");
	}
	char ch2='A';
	printf("Seventh pattern\n");
	for(int i=4,k=1;i>0,k<=4;i--,k++)
	{
		for(int j=0;j<i;j++)
		{
			printf("%c",ch2++);
		}
		ch2='A'+k;
		printf("\n");
	}
	return 0;
}
