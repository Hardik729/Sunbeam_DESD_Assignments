#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 20
#define NUM_STUDENTS 5

void nameccept(char arr[NUM_STUDENTS][MAX_NAME_LENGTH]);
void nameprint(char arr[NUM_STUDENTS][MAX_NAME_LENGTH]);
void namesort(char arr[NUM_STUDENTS][MAX_NAME_LENGTH]);

int main()
{
    char names[NUM_STUDENTS][MAX_NAME_LENGTH];

    printf("Enter the names of 5 students:\n");
    nameccept(names);

    printf("List of students:\n");
    nameprint(names);

    printf("Sorted list of students:\n");
    namesort(names);
    nameprint(names);

    return 0;
}

void nameccept(char arr[NUM_STUDENTS][MAX_NAME_LENGTH])
{
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        scanf("%s", arr[i]);
    }
}

void nameprint(char arr[NUM_STUDENTS][MAX_NAME_LENGTH])
{
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("%s\n", arr[i]);
    }
}

void namesort(char arr[NUM_STUDENTS][MAX_NAME_LENGTH])
{
    for (int i = 0; i < NUM_STUDENTS - 1; i++)
    {
        for (int j = 0; j < NUM_STUDENTS - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

