#include<stdio.h>

int main()
{
	int n,m,o,r,q,t,temp,rev;
	printf("Enter a 5 digit no.:\n");
	scanf("%d",&n);
	temp=n;
	m=n%10;
	n=n/10;
	o=n%10;
	n=n/10;
	r=n%10;
	n=n/10;
	q=n%10;
	n=n/10;
	t=n;
	rev = m*10000+o*1000+r*100+q*10+t;
	if(temp==rev)
		printf("The entered no. %d is palindrome\n",temp);
	else
		printf("The entered no. %d is not palindrome\n",temp);
	return 0;
}
