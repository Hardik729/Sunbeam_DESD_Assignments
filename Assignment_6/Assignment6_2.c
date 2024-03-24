#include<stdio.h>
#include<string.h>
#include<ctype.h>

size_t strlen(const char* str);
char *strcpy(char *dest,const char *src);
char *strcat(char *dest,const char *src);
int strcmp(const char *str1,const char *str2);
int stricmp(const char *str1,const char *str2);
char *strrev(char *str);
char *strchr(const char *str,int ch);
char *strstr(const char *str,const char *substr);

int main()
{
	int n,m,p,q,r,s;
	printf("Enter the size for 6 strings:");
	scanf("%d%d%d%d%d%d",&n,&m,&p,&q,&r,&s);
	
	char s1[n],s2[m],s3[p],s4[q],s5[r],s6[s],ch;
	
	printf("Enter string 1:");
	scanf("%s",s1);
	printf("Enter string 2:");
	scanf("%s",s2);

	printf("Enter string 3:");
	scanf("%s",s3);
	printf("Enter string 4:");
	scanf("%s",s4);

	printf("Enter string 5:");
	scanf("%s",s5);
	printf("Enter string 6:");
	scanf("%s",s6);

	printf("\nThe size of 1st string is %ld\n",strlen(s1));
	printf("The size of 2nd string is %ld\n",strlen(s2));

	printf("\nOriginal strings: %s & %s\n",s1,s2);
	strcpy(s1,s2);
	printf("After copying one string to another: %s & %s\n",s1,s2);

	printf("\nOriginal Strings: %s & %s\n",s3,s4);
	printf("Concatenated string: %s\n",strcat(s3,s4));

	if(strcmp(s5,s6)==0)
		printf("\nThe 2 entered strings are same\n");
	else
		printf("\nThe 2 entered strings are different\n");
	
	if(stricmp(s5,s6)==0)
		printf("\nThe 2 entered strings are same\n");
	else
		printf("\nThe 2 entered strings are different\n");

	printf("\nOriginal string: %s",s5);
	printf("Reversed string: %s\n",strrev(s5));

	printf("\nEnter the character to be searched in the string 3:");
	scanf("%*c%c",&ch);

	if(strchr(s3,ch)!=NULL)
		printf("\nThe entered character %c is present in the string %s\n",ch,s3);
	else
		printf("\nThe enetered character %c is not present in the string %s\n",ch,s3);
	
	char substr[s];
	printf("\nEnter a part of the string to be searched in string 6: ");
	scanf("%s",substr);
	
	if(strstr(s6,substr)!=NULL)
		printf("The entered substring %s is present in the string %s\n",substr,s6);
	else
		printf("The enetered substring %s is not present in the string %s\n",substr,s6);

	return 0;
}

size_t strlen(const char *str)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}

char *strcpy(char *dest,const char *src)
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
	return dest;
}

char *strcat(char *dest,const char *src)
{
	int j,length=strlen(dest);
	for(j=0;src[j]!='\0';j++)
	{
		dest[length+j]=src[j];
	}
	dest[length+j]='\0';
	return dest;
}

int strcmp(const char *str1,const char *str2)
{
	int l1=0,l2=0;
	for(int i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
	{
		l1++;
		l2++;
	}
	return l1-l2;
}

int stricmp(const char *str1,const char *str2)
{
	int l1=0,l2=0;
	while(*str1!='\0' && *str2!='\0' && tolower(*str1)==tolower(*str2))
	{
		str1++;
		str2++;
		l1++;
		l2++;
	}
	return l1-l2;
}

char *strrev(char *str)
{
	char *ptr=str;
	int length = strlen(str);
	for(int i=0,j=length-1;i<j;i++,j--)
	{
		int temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
	}
	return ptr;
}

char *strchr(const char *str,int ch)
{
	while(*str!='\0')
	{
		if(*str==ch)
			return (char*)str;
		str++;
	}
	return NULL;
}

char* strstr(const char* str, const char* substr) {
    while (*str != '\0') {
        const char* s1 = str;
        const char* s2 = substr;
        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
            s1++;
            s2++;
        }
        if (*s2 == '\0') {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}
