#include<stdio.h>

int year=0;

int isLeap(int n);
void nDays(int m);

int main()
{
	isLeap(2024);
	if(year==1)
		printf("Given year is a leap year\n");
	else
		printf("Given year is not a leap year\n");
	nDays(2);
	return 0;
}

int isLeap(int n)
{
	if(n%4==0 && n%100!=0 || n%400==0)
		year=1;
	else
		year=0;
	return year;
}

void nDays(int m)
{
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days are there in the given month\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days are there in the given month\n");
			break;
		case 2:
			printf("Enter year: \n");
			scanf("%d",&year);
			if(isLeap(year)!=0)
				printf("29 days are there in the given month\n");
			else
				printf("28 days are there in the given month\n");
			break;
	}
}
	
