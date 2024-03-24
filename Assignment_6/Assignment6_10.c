#include <stdio.h>

void findAndReplace(char *source,const char *find,const char *replace);

int main()
{
    char source[] ="This is test time";
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
    int sourceLen=0,findLen=0,replaceLen=0;
    int i,j,k,l;
    while(source[sourceLen]!='\0')
        sourceLen++;
    while(find[findLen]!='\0')
        findLen++;
    while(replace[replaceLen]!='\0')
        replaceLen++;
    for (i=0;i<=sourceLen-findLen;i++)
    {
        int found=1;
        for(j=0;j<findLen;j++)
        {
            if(source[i+j]!=find[j])
            {
                found=0;
                break;
            }
        }
        if(found)
        {
            for(k=sourceLen-1,l=sourceLen-1+replaceLen-findLen;k>=i+findLen;k--,l--)
                source[l] = source[k];
            for(k=0;k<replaceLen;k++)
                source[i+k]=replace[k];
            sourceLen+=replaceLen-findLen;
            i+=replaceLen-1;
        }
    }
}
