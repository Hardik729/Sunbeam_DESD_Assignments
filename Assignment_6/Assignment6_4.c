#include<stdio.h>

void remocu(char *str1,const char *str2);

int main()
{
	int n,m;
	printf("Enter the sizes for 2 strings: ");
	scanf("%d%d",&n,&m);
	char s1[n],s2[m];
	printf("Enter the string 1: ");
	scanf("%s",s1);
	printf("Enter the string 2: ");
	scanf("%s",s2);
	printf("Original string: %s\n",s1);
	remocu(s1,s2);
	printf("Modified string: %s\n",s1);
	return 0;
}

void remocu(char *str1,const char *str2)
{
	int i,j,k;
	for(i=0;str2[i]!='\0';++i)
	{
		char ch=str2[i];
		for(k=0,j=0;str1[j]!='\0';++j)
		{
			if(str1[j]!=ch)
				str1[k++]=str1[j];
		}
		str1[k]='\0';
	}
}
