#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Enter the day, month, and year (in format DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    if (month < 3)
    {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int dayOfWeek = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    switch (dayOfWeek)
    {
        case 0:
            printf("The day on %02d/%02d/%04d is Saturday\n", day, month, year);
            break;
        case 1:
            printf("The day on %02d/%02d/%04d is Sunday\n", day, month, year);
            break;
        case 2:
            printf("The day on %02d/%02d/%04d is Monday\n", day, month, year);
            break;
        case 3:
            printf("The day on %02d/%02d/%04d is Tuesday\n", day, month, year);
            break;
        case 4:
            printf("The day on %02d/%02d/%04d is Wednesday\n", day, month, year);
            break;
        case 5:
            printf("The day on %02d/%02d/%04d is Thursday\n", day, month, year);
            break;
        case 6:
            printf("The day on %02d/%02d/%04d is Friday\n", day, month, year);
            break;
    }

    return 0;
}

