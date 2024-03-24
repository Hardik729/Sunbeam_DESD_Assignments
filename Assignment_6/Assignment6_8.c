#include <stdio.h>

void printNumberInWords(int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Number in words: ");
    printNumberInWords(number);
	printf("\n");
    return 0;
}

void printNumberInWords(int number)
{
    if(number==0)
    {
        printf("Zero\n");
        return;
    }
    const char *ones[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    const char *teens[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    const char *tens[]={"", "","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if(number<0)
    {
        printf("Minus ");
        number=-number;
    }
    if(number>=1000)
    {
        printf("%s Thousand ",ones[number/1000]);
        number%=1000;
    }
    if(number>=100)
    {
        printf("%s Hundred ",ones[number/100]);
        number%=100;
    }
    if(number>=20)
    {
        printf("%s ",tens[number/10]);
        number%=10;
    }
    else if(number>=10)
    {
        printf("%s ",teens[number-10]);
        return;
    }

    if(number>0)
        printf("%s ",ones[number]);
}
