#include<stdio.h>

int main()
{
	float num1,num2;
	char choice;
	do
	{
		printf("Enter 2 no.s for arithematic operation: ");
		scanf("%f%f",&num1,&num2);
		printf("Arthematic operations that can be performed:\n");
		printf("1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\nPress 'y' to continue or 'n' to exit\n");
		printf("Enter corresponding symbol for operation: ");
		scanf("%*c%c",&choice);
		if(choice=='+')
			printf("Addition of %.2f and %.2f is %.2f\n",num1,num2,(num1+num2));
		else if(choice=='-')
			printf("Subtraction of %.2f and %.2f is %.2f\n",num1,num2,(num1-num2));
		else if(choice=='*')
			printf("Multiplication of %.2f and %.2f is %.2f\n",num1,num2,(num1*num2));
		else if(choice=='/')
			printf("Division of %.2f and %.2f is %.2f\n",num1,num2,(num1/num2));
		else
			break;
	}
	while(choice!='n');
	return 0;
}
