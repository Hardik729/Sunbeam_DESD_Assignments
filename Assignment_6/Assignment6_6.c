#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* itoa(int value,char* string,int base)
{
    char digits[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int is_negative=0;
    if(value<0&&base==10)
    {
        is_negative=1;
        value=-value;
    }
    int index = 0;
    do{
        string[index++]=digits[value%base];
        value/=base;
    }
    while(value>0);
    if(is_negative)
        string[index++]='-';
    string[index]='\0';
    int i,j;
    for(i=0,j=strlen(string)-1;i<j;i++,j--)
    {
        char temp=string[i];
        string[i]=string[j];
        string[j]=temp;
    }
    return string;
}

int main()
{
    int value=-12345;
    char string[20];
    int base=10;
    printf("String representation of %d in base %d: %s\n",value,base,itoa(value,string,base));
    return 0;
}

