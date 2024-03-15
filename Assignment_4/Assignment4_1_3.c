#include<stdio.h>

int calc(int n,int m,char ch);

int main()
{
	printf("%d\n",calc(4,0,'/'));
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
		if(m==0)
			ans=0;
			break;
		ans=n/m;
		break;
	}
	return ans;
}
