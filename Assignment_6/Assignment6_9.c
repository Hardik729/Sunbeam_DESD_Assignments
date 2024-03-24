#include <stdio.h>
#include <string.h>

void findAndReplace(char *source,const char *find,const char *replace);

int main()
{
    char source[]="This is test time";
    const char find[]="is";
    const char replace[]="was";
    printf("Input Source: %s\n",source);
    printf("Find: %s\n",find);
    printf("Replace: %s\n",replace);
    findAndReplace(source,find,replace);
    printf("Output: %s\n",source);
    return 0;
}

void findAndReplace(char *source,const char *find,const char *replace)
{
    char result[1000];
    char *temp=source;
    while((temp = strstr(temp, find))!=NULL)
    {
        strncpy(result,source,temp-source);
        result[temp-source]='\0';
        strcat(result,replace);
        strcat(result,temp+strlen(find));
        strcpy(source,result);
        temp+=strlen(replace);
    }
}
