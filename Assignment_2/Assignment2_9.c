#include <stdio.h>
#include <string.h>

int main() {
  int year;
  char month[10];

  printf("Enter a month and year (e.g., January 2024):\n");
  scanf("%s %d", month, &year);

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    if (strcmp(month, "January") == 0 || strcmp(month, "March") == 0 ||
        strcmp(month, "May") == 0 || strcmp(month, "July") == 0 ||
        strcmp(month, "August") == 0 || strcmp(month, "October") == 0 ||
        strcmp(month, "December") == 0) {
      printf("%s has 31 days and %d is a leap year (366 days)\n", month, year);
    } else if (strcmp(month, "April") == 0 || strcmp(month, "June") == 0 ||
               strcmp(month, "September") == 0 || strcmp(month, "November") == 0) {
      printf("%s has 30 days and %d is a leap year (366 days)\n", month, year);
    } else {
      printf("%s has 29 days and %d is a leap year (366 days)\n", month, year);
    }
  } else {
    if (strcmp(month, "January") == 0 || strcmp(month, "March") == 0 ||
        strcmp(month, "May") == 0 || strcmp(month, "July") == 0 ||
        strcmp(month, "August") == 0 || strcmp(month, "October") == 0 ||
        strcmp(month, "December") == 0) {
      printf("%s has 31 days and %d is not a leap year (365 days)\n", month, year);
    } else if (strcmp(month, "April") == 0 || strcmp(month, "June") == 0 ||
               strcmp(month, "September") == 0 || strcmp(month, "November") == 0) {
      printf("%s has 30 days and %d is not a leap year (365 days)\n", month, year);
    } else {
      printf("%s has 28 days and %d is not a leap year (365 days)\n", month, year);
    }
  }

  return 0;
}

