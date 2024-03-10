#include<stdio.h>

int main()
{
	char ch;
	int i=0,n;
	printf("Enter a character and a integer: ");
	scanf("%c%d",&ch,&n);
	while(i<n)
	{
		printf("%c",ch);
		i++;
	}
	printf("\n");
	return 0;
}
