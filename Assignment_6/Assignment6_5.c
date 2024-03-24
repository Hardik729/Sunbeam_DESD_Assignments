#include <stdio.h>

int atoi(const char* string)
{
    int result=0;
    int sign=1;
    int i=0;
    if(string[0]=='-')
    {
        sign=-1;
        i++;
    }
    while(string[i]!='\0'&&string[i]>='0'&&string[i]<='9')
    {
        result=result*10+(string[i]-'0');
        i++;
    }
    return sign*result;
}

int main()
{
    const char *string="-12345";
    int num_equivalent=atoi(string);
    printf("Numeric equivalent of \"%s\" is %d\n",string,num_equivalent);
    return 0;
}

