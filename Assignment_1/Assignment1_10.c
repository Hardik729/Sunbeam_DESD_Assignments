#include<stdio.h>
#include<math.h>

int main()
{
	int s1,s2,s3,s,p,a,b;
	printf("Enter the length of the sides of the triangle:\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	s=(s1+s2+s3)/2;
	p=s1+s2+(s3*s1)+s2+s3;
	b = s*(s-s1)*(s-s2)*(s-s3);
	a = sqrt(b);
	printf("Area of the triangle:%d\n",a);
	printf("Perimeter of the triangle:%d\n",p);
	return 0;
}
