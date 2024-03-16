#include<stdio.h>

void display(char ch,int n);

int main()
{
	display('A',5);
	return 0;
}

void display(char ch,int n)
{
	for(int i=0;i<n;i++)
		printf("%-2c",ch);
	printf("\n");

}
