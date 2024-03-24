#include<stdio.h>
#include<string.h>

char *strrev(char *str);

int main()
{
	int n,m,p,q,r,s;
	printf("Enter 6 sizes for 6 strings: ");
	scanf("%d%d%d%d%d%d",&n,&m,&p,&q,&r,&s);

	char s1[n],s2[m],s3[p],s4[q],s5[r],s6[s];
	printf("Enter the string 1: ");
	scanf("%s",s1);
	printf("Enter string 2: ");
	scanf("%s",s2);
	printf("Enter string 3: ");
	scanf("%s",s3);
	printf("Enter string 4: ");
	scanf("%s",s4);
	printf("Enter string 5: ");
	scanf("%s",s5);
	printf("Enter string 6: ");
	scanf("%s",s6);

	printf("Length of string 1(%s) & string 2(%s) is %lu & %lu respectively.\n",s1,s2,strlen(s1),strlen(s2));

	printf("\nUsing strcpy():\n");
	printf("Original string 1 & 2: %s & %s\n",s1,s2);
	strcpy(s1,s2);
	printf("String 1 & 2 after string copy operation: %s & %s\n",s1,s2);

	printf("\nUsing strncpy():\n");
	printf("Original string 3 & 4: %s & %s\n",s3,s4);
	strncpy(s3,s4,3);
	printf("String 3 & 4 after string copy operation: %s & %s\n",s3,s4);
	
	printf("\nUsing strcat():\n");
	printf("Concatenated string %s\n",strcat(s1,s2));

	printf("\nUsing strncat():\n");
	printf("Concatenated string %s\n",strncat(s1,s2,3));

	printf("\nUsing strcmp():\n");
	if(strcmp(s1,s2)==0) 
		printf("The 2 entered strings are same.\n");
	else
		printf("The 2 eneterd strings are different.\n");
	
	printf("\nUsing strcasecmp():\n");
	if(strcasecmp(s1,s2)==0) //Used strcasecmp instead of stricmp, since it is not supported in the C standard and string libraries.
		printf("The 2 entered strings are same.\n");
	else
		printf("The 2 eneterd strings are different.\n");
	
	printf("\nUsing strncmp():\n");
	if(strncmp(s1,s2,4)==0) 
		printf("The 2 entered strings are same.\n");
	else
		printf("The 2 eneterd strings are different.\n");
	
	printf("\nUsing own defined strrev():\n");
	printf("Original string is %s\n",s1);
	printf("The reversed string is %s\n",strrev(s1));
	
	printf("\nUsing strtok():\n");
	char sentence[]="Hardik Wakodikar is here";
	char *token=strtok(sentence," ");

	while(token!=NULL)
	{
		printf("%s\n",token);
		token=strtok(NULL," ");
	}
	
	char ch;
	printf("\nUsing strchr():\n");
	printf("Enter a character to be searched in string 5: \n");
	scanf("%*c%c",&ch);
	if(strchr(s5,ch)!=NULL)
		printf("Entered character %c is present in the string %s\n",ch,s5);
	else
		printf("Entered character %c is not present in the string %s\n",ch,s5);

	char substr[n];
	printf("\nUsing strstr():\n");
	printf("Enter a string to be searched in string 6:\n");
	scanf("%s",substr);
	if(strstr(s6,substr)!=NULL)
		printf("Entered substring %s is present in the string %s\n",substr,s6);
	else
		printf("Entered substring %s is not presnt in the string %s\n",substr,s6);

	return 0;
}

//Defining my own string reverse function,since there is no strrev() in-built function exists in the C standard library.
char *strrev(char *str)
{
	int length = strlen(str);
	char temp;
	for(int i=0,j=length-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	return str;

}
