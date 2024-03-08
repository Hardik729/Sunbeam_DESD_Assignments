#include<stdio.h>

int main()
{
	int f,c;
	printf("Enter the temperature value:");
	scanf("%d",&c);
	f=((9*c)/5)+32;
	printf("Temperature in celsius is:%d\n",f);
	return 0;
}
