#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *intToRoman(int num);
int romanToInt(char *s);

int main()
{
    int number=3549;
    char roman_numeral[]="MMMDXLIX";
    printf("The Roman numeral equivalent of %d is: %s\n",number,intToRoman(number));
    printf("The decimal equivalent of %s is: %d\n",roman_numeral,romanToInt(roman_numeral));
    return 0;
}

char *intToRoman(int num)
{
    char* roman_numerals[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int values[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char* result=(char*)malloc(sizeof(char)*1000);
    result[0]='\0';
    int i=12;
    while(num>0)
    {
        while(num>=values[i])
        {
            strcat(result,roman_numerals[i]);
            num-=values[i];
        }
        i--;
    }
    return result;
}

int romanToInt(char *s)
{
    int values[26];
    values['I'-'A']=1;
    values['V'-'A']=5;
    values['X'-'A']=10;
    values['L'-'A']=50;
    values['C'-'A']=100;
    values['D'-'A']=500;
    values['M'-'A']=1000;

    int result=0;
    int prev_value=0;

    while (*s!='\0')
    {
        int curr_value=values[*s-'A'];
        if(curr_value>prev_value)
        {
            result+=curr_value-2*prev_value;
        }
        else
            result+=curr_value;
        prev_value=curr_value;
        s++;
    }
    return result;
}
