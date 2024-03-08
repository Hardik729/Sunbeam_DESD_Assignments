#include<stdio.h>

int main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d", &year);

    printf("without using logical operators\n");
    if (year % 4 == 0)
    {
        if (year % 400 == 0)
        {
            if (year % 100 != 0)
			{
                printf("Given year %d is a leap year\n", year);
				printf("No. of days in %d is 366\n",year);
            }
			else
            {   
			    printf("Given year %d is not a leap year\n", year);
				printf("No. of days in %d is 365\n",year);
			}
        }
		else
		{
			printf("Given year %d is a leap year\n", year);
			printf("No. of days in %d is 366\n",year);
		}
    }
	else
	{
		printf("Given year %d is not a leap year\n",year);
		printf("No. of days in %d is 365\n",year);
	}
    printf("Using logical operators\n");
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
		printf("Given year %d is a leap year\n", year);
		printf("No. of days in %d is 366\n",year);
	}
    else
	{
		printf("Given year %d is not a leap year\n", year);
		printf("No. of days in %d is 365\n",year);
	}
    printf("Using conditional operators\n");
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 1 : 0)
    {
		printf("Given year %d is a leap year\n", year);
		printf("No. of days in %d is 366\n",year);
    }
	else
    {
		printf("Given year %d is not a leap year\n", year);
		printf("No. of days in %d is 365\n",year);
	}
    return 0;
}

