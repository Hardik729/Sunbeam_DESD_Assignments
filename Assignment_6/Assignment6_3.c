#include<stdio.h>

void removeChar(char *str, char ch)
{
    int i,j;
    for(i=0,j=0;str[i]!='\0';i++)
    {
        if(str[i]!=ch)
            str[j++] = str[i];
    }
    str[j]='\0';
}

int main()
{
    char str[]="Hardik";
    char ch='a';
    printf("Original string: %s\n",str);
    removeChar(str,ch);
    printf("String after removing '%c': %s\n",ch,str);
    return 0;
}

