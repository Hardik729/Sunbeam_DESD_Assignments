#include<stdio.h>

int main()
{
	float n,m;
	int choice;
	printf("Enter 2 no.s for calculation:\n");
	scanf("%f%f",&n,&m);
	printf("Mathematical operations that can be performed:\n");
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Addition of %.2f and %.2f is %.2f\n",n,m,(n+m));
			break;
		case 2:
			printf("Subtraction of %.2f and %.2f is %.2f\n",n,m,(n-m));
			break;
		case 3:
			printf("Multipication of %.2f and %.2f is %.2f\n",n,m,(n*m));
			break;
		case 4:
			printf("Division of %.2f and %.2f is %.2f\n",n,m,(n/m));
			break;
	}
	return 0;
}
