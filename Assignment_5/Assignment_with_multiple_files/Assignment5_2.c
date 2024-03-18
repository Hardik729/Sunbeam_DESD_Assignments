#include "Assignment5.h"

void eleccept(int *arr,int size) 
{
    printf("Enter the array elements:\n");
    for (int i=0;i<size;i++)
        scanf("%d",&arr[i]);
}

void eleprint(int *arr,int size)
{
    printf("Array elements:\n");
    for (int i=0;i<size;i++)
        printf("%-3d",arr[i]);
    printf("\n");
}

