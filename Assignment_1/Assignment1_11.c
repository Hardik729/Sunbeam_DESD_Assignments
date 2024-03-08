#include<stdio.h>
#include<limits.h>

int main()
{
    printf("--------------------------------------------------------------------------------------\n");
	printf("Data Type\t\tSize\tFormat Specifier\tRange\n");
    printf("--------------------------------------------------------------------------------------\n");
	printf("char\t\t\t%ld\t\%%c\t\t\t%d to %d\n",sizeof(char),CHAR_MIN,CHAR_MAX);
	printf("unsigned char\t\t%ld\t\%%c\t\t\t%d to %d\n",sizeof(char),0,UCHAR_MAX);
	printf("short int\t\t%ld\t\%%hd\t\t\t%d to %d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("unsigned short int\t%ld\t\%%hd\t\t\t%d to %d\n",sizeof(unsigned short int),0,USHRT_MAX);
	printf("int\t\t\t%ld\t\%%d\t\t\t%d to %d\n",sizeof(int),SHRT_MIN,SHRT_MAX);
	printf("unsigned int\t\t%ld\t\%%u\t\t\t%d to %d\n",sizeof(unsigned int),0,USHRT_MAX);
	printf("long int\t\t%ld\t\%%ld\t\t\t%d to %d\n",sizeof(long int),INT_MIN,INT_MAX);
	printf("unsigned long int\t%ld\t\%%lu\t\t\t%d to %lu\n",sizeof(unsigned long int),0,ULONG_MAX);
    printf("--------------------------------------------------------------------------------------\n");
	return 0;
}
