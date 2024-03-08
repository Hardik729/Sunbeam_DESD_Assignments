#include<stdio.h>

int main()
{
	int a = '\n', b='\r', c='\t', d='\a', e='\b';	
	printf("ASCII values of character constants:\n");
	printf("\\n=%d\n",a);
	printf("\\r=%d\n",b);
	printf("\\t=%d\n",c);
	printf("\\a=%d\n",d);
	printf("\\b=%d\n",e);
	return 0;
}
