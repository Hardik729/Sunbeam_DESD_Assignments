#include<stdio.h>

int calc(int a,int b,char ch,int *ans);

int flag=0;

int main()
{
	int result=0;
	calc(45,0,'%',&result);
	if(flag==0)
		printf("%d\n",result);
	else
	{
		flag=0;
		printf("Error: Division by zero\n");
	}
	return 0;
}

int calc(int a,int b,char ch,int *ans)
{
	switch(ch)
	{
		case '+':
			*ans=a+b;
			break;
		case '-':
			*ans=a-b;
			break;
		case '*':
			*ans=a*b;
			break;
		case '%':
			if(b==0)
				return flag=1;
			else
				*ans=a%b;
			break;
	}
}
