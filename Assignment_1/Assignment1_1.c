#include<stdio.h>

int main()
{
	int n,m;
	printf("Enter 2 no.s: ");
	scanf("%d%d",&n,&m);
	
	printf("Testing for integer data type:\n");
	printf("Sum=%d\n",(n+m));
	printf("Difference=%d\n",(n-m));
	printf("Product=%d\n",(n*m));

	printf("Testing for signed char data type:\n");
	printf("Sum=%hhd\n",((signed char)n+(signed char)m));
	printf("Difference=%hhd\n",((signed char)n-(signed char)m));
	printf("Product=%hhd\n",((signed char)n*(signed char)m));
	
	printf("Testing for unsigned char data type:\n");
	printf("Sum=%hhu\n",((unsigned char)n+(unsigned char)m));
	printf("Difference=%hhu\n",((unsigned char)n-(unsigned char)m));
	printf("Product=%hhu\n",((unsigned char)n*(unsigned char)m));

	printf("Testing for long integer data type:\n");
	printf("Sum=%ld\n",((long)n+(long)m));
	printf("Difference=%ld\n",((long)n-(long)m));
	printf("Product=%ld\n",((long)n*(long)m));

	return 0;
}
