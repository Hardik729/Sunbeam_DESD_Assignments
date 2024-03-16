#include <stdio.h>

void repeatCharacter(char ch,int times,char* result)
{
    for (int i=0;i<times;i++)
        result[i] = ch;
    result[times] = '\0';
}

int main()
{
    char character='*';
    int numberOfTimes=10;
    char repeatedChars[numberOfTimes + 1];
    repeatCharacter(character,numberOfTimes,repeatedChars);
    printf("%s\n",repeatedChars);
    return 0;
}

