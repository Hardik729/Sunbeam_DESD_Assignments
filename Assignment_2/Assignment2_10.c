#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		if(isupper(ch))
			printf("ASCII value of %c is %d\n",ch,ch);
		else if(islower(ch))
			printf("ASCII value of %c is %d\n",ch,ch);
	}
	else if(isdigit(ch))
		printf("ASCII value of %c is %d\n",ch,ch);
	else if(ch==' ' || ch=='\t' || ch=='\n' || ch=='\r')
		printf("ASCII value of %c is %d\n",ch,ch);
	else
		printf("Not listed above\n");
	return 0;
}
