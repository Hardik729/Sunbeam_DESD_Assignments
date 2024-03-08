#include<stdio.h>

int main()
{
	char c;
	printf("Enter a character for getting values in different formats: ");
	scanf("%c",&c);
	printf("Decimal= %d\n",c);
	printf("Octal= %o\n",c);
	printf("Hexadecimal= %x\n",c);
	return 0;
}

