#include <stdio.h>

int main()
{
    int month, year;
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    printf("Enter a year: ");
    scanf("%d", &year);
    if (month < 1 || month > 12)
    {
        printf("Invalid month input.\n");
        return 1;
    }
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days in %d/%d: 31 days\n", month, year);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days in %d/%d: 30 days\n", month, year);
            break;

        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("Number of days in %d/%d: 29 days (leap year)\n", month, year);
            else
                printf("Number of days in %d/%d: 28 days\n", month, year);
            break;
        default:
            printf("Invalid month input.\n");
            return 1;
    }
    return 0;
}

