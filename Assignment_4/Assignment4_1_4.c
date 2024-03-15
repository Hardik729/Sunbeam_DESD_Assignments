#include<stdio.h>

int flag=0;
int calc(int n,int m,char ch);

int main()
{
	if(flag!=1)
		printf("%d\n",calc(4,2,'+'));
	return 0;
}

int calc(int n,int m,char ch)
{
	int ans;
	switch(ch)
	{
	case '+':
		ans=n+m;
		break;
	case '-':
		ans=n-m;
		break;
	case '*':
		ans=n*m;
		break;
	case '/':
		if(m<=0)
			flag=1;
			break;
		ans=n/m;
		break;
	}
	return ans;
}
